#include<ctime>
#include<cstdio>
#include<windows.h>
#include<iostream>
#include   <stdlib.h>
#include   <time.h>
#include<fstream>
using namespace std;
#define MIN 1    //随机数产生的范围
#define MAX 8
#define MIN1 10
#define MAX1 100
int tot=0;

int mz[11]={0,523,587,659,698,784,880,988,1046,1175},shu,dd;
int xz,yfs;

int main(){
    srand(time(NULL));
    srand((unsigned)time(NULL));
    time_t rawtime;
    struct tm * timeinfo;
    ofstream ofile;
    ofile.open("乐谱.txt");
    while(1)
    {
        cout<<"请选择:"<<endl;
        cout<<"1、电脑作曲"<<endl;
        cout<<"2、人工作曲"<<endl;
        cout<<"3、导入乐谱"<<endl;
        cin>>xz;
        char c;
        if(xz==1)
        {
            cout<<"请输入音符数："<<endl;
            cin>>yfs;
            while(yfs)
            {
            shu=MIN + rand() % (MAX + MIN - 1);
            dd=MIN1 + rand() % (MAX1 + MIN1 - 1);
            c=shu-'0';
            tot++;
            if(tot==100)printf("Quicker\n");
            if(tot==300)printf("Slower\n");
            if(tot%100==0||c=='\n'||c==' ')Sleep(100);
            int ha=int(c);
            if(c>='1'&&c<='9'){
             if(tot>100&&tot<300)Beep(mz[(ha-45)%10],(rand()+100)%150);
                else Beep(mz[(ha-48)%10],(rand()+180)%400);
             }
            else {
            if(ha<0)ha=-ha;
            if(tot>100&&tot<300)Beep(mz[(ha+2)%10],(rand()+100)%150);
            else Beep(mz[ha%10],(rand()+180)%400);
            }
            cout<<"本工具有AK47和moqiyuu共同制作(是根据某位大佬的程序改进的)";
            if(tot>500)tot=0;
            Sleep(dd);
            ofile<<shu<<endl;
            ofile<<dd<<endl;
            ofile<<endl;
            yfs--;
            system("cls");
            }
        }
        if(xz==2)
        {

                while(1)
            {
            cout<<"提示：输入47666结束"<<endl;
            cout<<"音符（1-8）：";
            cin>>shu;
            if(shu==47666) return 0;
            cout<<"这个音符后的等待（单位毫秒）：";
            cin>>dd;
            if(dd==47666) return 0;
            c=shu-'0';
            tot++;
            if(tot==100)printf("Quicker\n");
            if(tot==300)printf("Slower\n");
            if(tot%100==0||c=='\n'||c==' ')Sleep(100);
            int ha=int(c);
            if(c>='1'&&c<='9'){
             if(tot>100&&tot<300)Beep(mz[(ha-45)%10],(rand()+100)%150);
                else Beep(mz[(ha-48)%10],(rand()+180)%400);
             }
            else {
            if(ha<0)ha=-ha;
            if(tot>100&&tot<300)Beep(mz[(ha+2)%10],(rand()+100)%150);
            else Beep(mz[ha%10],(rand()+180)%400);
            }
            cout<<"本工具有AK47和moqiyuu共同制作(是根据某位大佬的程序改进的)";
            if(tot>500)tot=0;
            Sleep(dd);
            ofile<<shu<<endl;
            ofile<<dd<<endl;
            ofile<<endl;
            system("cls");
            }
        }
        if(xz==3)
         while(1)
            {
            cout<<"提示：输入47666结束"<<endl;
            cin>>shu;
            if(shu==47666) break;
            cin>>dd;
            if(dd==47666) break;
            c=shu-'0';
            tot++;
            if(tot==100)printf("Quicker\n");
            if(tot==300)printf("Slower\n");
            if(tot%100==0||c=='\n'||c==' ')Sleep(100);
            int ha=int(c);
            if(c>='1'&&c<='9'){
             if(tot>100&&tot<300)Beep(mz[(ha-45)%10],(rand()+100)%150);
                else Beep(mz[(ha-48)%10],(rand()+180)%400);
             }
            else {
            if(ha<0)ha=-ha;
            if(tot>100&&tot<300)Beep(mz[(ha+2)%10],(rand()+100)%150);
            else Beep(mz[ha%10],(rand()+180)%400);
            }
            cout<<"本工具有AK47和moqiyuu共同制作(是根据某位大佬的程序改进的)";
            if(tot>500)tot=0;
            Sleep(dd);
            ofile<<shu<<endl;
            ofile<<dd<<endl;
            ofile<<endl;
            system("cls");
            }
            ofile<<endl;
    }
    ofile.close();
}
