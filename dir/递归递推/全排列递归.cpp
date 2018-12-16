#include <iostream>  
  
using namespace std;  
int total = 0;  
//交换函数  
void swapArray(int &a,int &b)  
{  
    int temp;  
    temp = a;  
    a = b;  
    b = temp;  
}  
//递归函数  
void fullPermutation(int * fullArray,int start,int end,int number){  
    //这里，既可以是">=",也可以是">",，应该也可以是"=="  
    if(start>=end){  
        for(int i=0;i<number;i++){  
            cout<<fullArray[i];  
        }  
        cout<<endl;  
        total++;  
    }  
    else{  
        for(int i=start;i<=end;i++){  
            swapArray(fullArray[start],fullArray[i]);//交换  
            fullPermutation(fullArray,start+1,end,number);  
            swapArray(fullArray[start],fullArray[i]);//注意恢复原样  
        }  
    }  
}  
int main()  
{  
    int number;//全排列的长度  
    cout<<"Number:"<<endl;  
    cin>>number;  
    int * fullArray = new int[number];//动态生成全排列的数组  
    //初始化  
    for (int i=0;i<number;i++)  
    {  
        fullArray[i] = i+1;  
    }  
    fullPermutation(fullArray,0,number-1,number);  
    cout<<"Total = "<<total;  
    return 0;  
} 
