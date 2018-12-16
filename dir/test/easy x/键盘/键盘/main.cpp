#include <graphics.h>
#include <conio.h>                

// 主函数
int main()
{
	// 初始化绘图环境
	initgraph(500, 500);
	for (int i = 0; i < 500; i++)
	{
		setlinecolor(i);
		line(i, 0, i, 499);
	}
	Sleep(2000);
	clearrectangle(0, 0, 500, 500);
	// 任意键关闭绘图环境
	_getch();
	closegraph();
}