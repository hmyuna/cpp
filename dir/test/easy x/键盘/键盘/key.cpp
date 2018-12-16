#include "key.h"
#include <conio.h>
#include <iostream>
using namespace std;

int getk(int k)
{
	int ch;
		if (_kbhit()) {//如果有按键按下，则_kbhit()函数返回真
			ch = _getch();//使用_getch()函数获取按下的键值
			return ch;
		}
}