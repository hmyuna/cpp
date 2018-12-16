#include<iostream> 
#include<bits/stdc++.h>
 #include<conio.h> 
#include<windows.h> 

#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0) //必要的，我是背下来的 

using namespace std; 
char L, R;
int main(){ 
scanf("%c %c", &L, &R);
system("cls");
int now=0; 
while(1){ 
if(KEY_DOWN(VK_SPACE)){//VK_SPACE 是空格的虚拟键值 
now=0; 
Sleep(100); 
} 
if(KEY_DOWN(L)){ 
now=1; 
Sleep(100); 
} 
if(KEY_DOWN(R)){ 
now=2; 
Sleep(100); 
} 
if(now==1){ 
mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0); 
Sleep(10); 
mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0); 
} 
if(now==2){ 
mouse_event(MOUSEEVENTF_RIGHTDOWN,0,0,0,0); 
Sleep(10); 
mouse_event(MOUSEEVENTF_RIGHTUP,0,0,0,0); 
} 

Sleep(20); 
} 
} 
