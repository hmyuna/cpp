#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
int now;//个数
struct goods{
    int p;
    int n;
}g[10000];//记录利润和销量
int x, n, cost;
void add(int a, int b)
 {
    g[now].p = (a);
    g[now].n = (b);
    now++;
}
void init()
{
    int i;//循环变量
    int a, b;//成本 销售量
    int c, d;//分段线性变量
    int k, f;//k:线性因数y=kx,f=利润
    scanf("%d", &x);//读入
    scanf("%d%d", &a, &b);//读入
    cost = a;//成本
    x -= cost;//每个都减少成本价
    while(scanf("%d%d", &c, &d)==2&&(c != -1 || d != -1))//循环读入直到-1
	{
        k = (d - b) / (c - a);//计算线性
        f = d - c * k;//利润
        for(i = a; i <= c - 1; i++)
	{
            add(i - cost, k * i + f);//计算中间价格
        }
        a = c, b = d;
    }
    scanf("%d", &k);//读入
    for(i = a; (b - (i - a) * k) > 0; i++)
	{
        add(i - cost, (b - (i - a) * k));//最高价后的价格
    }
}

int main()
{
    int i, j;
    int a, b, k;
    double up = -100000, down = 1000000;
    init();
    for(i = 0; i < now; i++)
	{
        if(g[i].p == x)//发现为预期价格
	{
            n = g[i].n;//保存
            break;
        }
    }
    for(i = 0; i < now; i++)
	{
        k = 1;//符号
        a = g[i].p * g[i].n - n * x;//算出利润
        b = n - g[i].n;//计算销量
        if(b < 0)
	{
            k = -1;
        }//负数
        if(b != 0)//更新
	{
            if(k == 1)
			{
                up = max(up, (double)a / b);//最大值
            }
            else
            {
                down = min(down, (double)a / b);//最小值
            }
        }
    }
    if(up <= down)
    {
        if(up > 0)
        {
            printf("%d\n", (int)ceil(up));//绝对值小
        }
        else
        {
            down = fabs(down);
            printf("%d\n", - (int)ceil(down));//绝对值大
        }
    }
    else//不可能
    {
        printf("NO SOLUTION\n");
    }
    return 0;
}
init