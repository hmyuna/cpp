#include<bits/stdc++.h>

using namespace std;

int a[3][9][9]= {0},map_start[9][9],flag[9][9];

long long count_way=0;

int get_index_in_small(int y,int x)
{
    return 3*(y/3)+(x/3);
}

int get_next(int y,int x,int start)

{
    //以当前坐标的当前值为基准，寻找交集中的下一个数

    for(int i=start; i<9; i++)

        if(a[0][y][i]==0&&a[1][x][i]==0&&a[2][get_index_in_small(y,x)][i]==0)return i;

    return -1;
}

void show()
{
	cout << endl;
    //打印九宫的可行解
    for(int i=1; i<=81; i++)
    {
        printf("%d",map_start[i/9][i%9-1]+1);
        if(!(i%9))printf("\n");
    }
    cout << endl;
}

void change_rule(int style,int x,int y)
{
    //当style为0,改写规则为未占用。当style为1,改写规则为已占用
    a[0][y][map_start[y][x]]=style;
    a[1][x][map_start[y][x]]=style;
    a[2][get_index_in_small(y,x)][map_start[y][x]]=style;
}

void solve(int y,int x)
{
    if(x==9)
    {
        y++;
        x=0;
    }
    while(!flag[y][x]&&y<=8)
    {
        x++;    //获取下一个可填数的坐标
        if(x==9)
        {
            y++;
            x=0;
        }
    }
    if(y>8)
    {
        show();    //当前的坐标已经超出数独范围，默认已得出一个可行解
        count_way++;
        return;
    }
    while((map_start[y][x]=get_next(y,x,map_start[y][x]+1))!=-1)//以当前坐标的当前值为基准，寻找下一个可填数
    {
        change_rule(1,x,y);//改写规则为已占用
        solve(y,x+1);      //若只想求出一个可行解就退出，可加上这代码：if(count_way)break;
        change_rule(0,x,y);//改写规则为未占用
    }
}

int main()
{
    for(int i=0; i<9; i++)
    {
        for(int j=0; j<9; j++)
        {
            map_start[i][j]=getchar()-'0';
            if(!map_start[i][j])
            {
                flag[i][j]=1;
                map_start[i][j]=-1;
            }
            else
            {
                flag[i][j]=0;
                map_start[i][j]--;//为方便计算，我们初始化数字范围为0-8，填完数在输出时再加上1即可
                change_rule(1,j,i);//改写规则为已占用
            }
        }
        getchar();//把回车符吃掉
    }
    solve(0,0);//从(0,0)位置开始填数
    cout << count_way << endl;
    return 0;
}