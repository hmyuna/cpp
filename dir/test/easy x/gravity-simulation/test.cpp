/////////////////////////////////////////////////////////
// 程序名称：引力模拟
// 编译环境：Visual C++ 6.0，EasyX 2013重阳版
// 作    者：有时的迷惘 <http://www.baidu.com/p/有时的迷惘>
// 最后修改：2013-9-19
//
#include"object.h"
#include"easyx.h"
#include<cstdio>
#include<conio.h>
#include<vector>
#include<time.h>
#include<deque>

double sx=1;							//缩放系数
const int st=5000;						//每帧计算循环次数，加快速度
const int maxx=1366;
const int maxy=768;
double cmass=1.0;						//初始质量
double cradius=1.0;						//初始半径
const double maxmass=5000;				//质量上限


void NewSleep(int t)
{
	static clock_t oldclock = clock();	// 静态变量，记录上一次 tick

	t *= CLOCKS_PER_SEC / 1000;			// 将毫秒转换为 tick
	oldclock += t;						// 更新 tick

	while(clock() < oldclock)			// 延时
		Sleep(1);						// 释放 CPU 控制权，降低 CPU 占用率
}

void draw(const gravitation::object& obj,COLORREF color=LIGHTGRAY)
{
	if(obj.radius()*sx>=2||obj.radius()*sx<=-2)		//防止“消失”
	{
		setfillcolor(color);
		solidcircle(static_cast<int>(obj.position().x()*sx),static_cast<int>(obj.position().y()*sx),static_cast<int>(obj.radius()*sx));
	}
	else
		putpixel(static_cast<int>(obj.position().x()*sx),static_cast<int>(obj.position().y()*sx),color);
}

void draw(const gravitation::vector& vec,COLORREF color=BLUE)
{
	putpixel(static_cast<int>(vec.x()*sx),static_cast<int>(vec.y()*sx),color);
}


int main()
{
	using namespace gravitation;


	initgraph(maxx,maxy);
	HWND hwnd=GetHWnd();
	SetWindowLong(hwnd , GWL_STYLE ,GetWindowLong(hwnd, GWL_STYLE) - WS_CAPTION);
	SetWindowPos(hwnd , HWND_TOP , 0 , 0 ,GetSystemMetrics(SM_CXSCREEN) , GetSystemMetrics(SM_CYSCREEN) ,SWP_SHOWWINDOW);

	setorigin(maxx/2, maxy/2);
	settextcolor(RED);
	setlinecolor(RED);

	std::deque<object*> objque;						//存储天体
	std::deque<std::vector<vector> > veque;			//存储尾迹

	int mx,my,vx,vy;								//记录创建的位置及速度
	char s[50];										//输出
	MOUSEMSG msg;
	
	objque.push_back(new object(10000,30,vector(-100),vector(0,2.357023)));
	objque.push_back(new object(5000,15,vector(200),vector(0,-4.714045)));
	objque.push_back(new object(1,2,vector(220),vector(0,-20)));

	BeginBatchDraw();
	while(!_kbhit())
	{
		while(MouseHit())
		{
			msg=GetMouseMsg();
			switch(msg.uMsg)
			{
				case WM_LBUTTONDOWN:		//记录创建位置
					mx=msg.x-maxx/2;
					my=msg.y-maxy/2;
					break;
				case WM_LBUTTONUP:			//创建
				{
					//确认速度
					vx=(msg.x-maxx/2-mx)/10;	
					vy=(msg.y-maxy/2-my)/10;
					//创建新天体
					if(static_cast<int>(sx*1000)!=0)
					{
						if(objque.size()==10)			//最多十个
						{
							delete objque.front();
							objque.pop_front();
						}
						objque.push_back(new object(cmass,cradius,vector(mx/sx,my/sx),vector(vx,vy)));
					}
					cmass=1.0;
					cradius=1.0;
					break;
				}
				case WM_RBUTTONDOWN:			//删除最后一个
					if(objque.size())
					{
						delete objque.back();
						objque.pop_back();
					}
					break;
				case WM_MOUSEWHEEL:			//缩放
					sx+=(static_cast<double>(msg.wheel)/1200)*sx;
					break;
			}
		}
		//创建时一直划线,鼠标一直按下会增加大小及质量
		if(msg.mkLButton)
		{
		
			line(mx,my,msg.x-maxx/2,msg.y-maxy/2);
			if(cmass<maxmass)
			{
				cmass=cmass+10.0;
				cradius=cradius+0.04;
			}
			sprintf(s,"质量： %0.3lf\0",cmass);
			outtextxy(-1*maxx/2,-1*maxy/2+40,s);
			sprintf(s,"半径： %0.3lf\0",cradius);
			outtextxy(-1*maxx/2,-1*maxy/2+60,s);
		}

		//记录并绘出尾迹
		static int wi(0);	
		std::vector<vector> ve;																			//每个object一起存储
		for(std::deque<object* >::iterator itr=objque.begin();itr!=objque.end();++itr)					//记录尾迹
		{
			ve.push_back((*itr)->position());
		}
		veque.push_back(ve);
		if(++wi==200){veque.pop_front();--wi;}															//尾迹长度
		for(std::deque<std::vector<vector> >::iterator it1=veque.begin();it1!=veque.end();++it1)		//画尾迹
		{
			for(std::vector<vector>::iterator it2=it1->begin();it2!=it1->end();++it2)
				draw(*it2);
		}


		for(int i=0;i!=st;++i){stepforward();}															//行进
		for(std::deque<object* >::iterator itr=objque.begin();itr!=objque.end();++itr)	{draw(**itr);}	//绘图

		sprintf(s,"总数:%d\0",objque.size());
		outtextxy(-1*maxx/2,-1*maxy/2,s);
		sprintf(s,"放大倍数： %0.3lf\0",sx);
		outtextxy(-1*maxx/2,-1*maxy/2+20,s);

		FlushBatchDraw();
		NewSleep(20);
		cleardevice();
	}
	closegraph();
	while(objque.size()!=0)
	{
		delete objque.back();
		objque.pop_back();
	}
	return 0;
}