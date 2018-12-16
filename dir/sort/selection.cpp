#include <iostream>
using namespace std;

/*���������������ǽ��������е�����Ԫ�ص�λ��*/
void swap(int array[],int i,int j)
{
    int tmp=array[i];
    array[i]=array[j];
    array[j]=tmp;
}
/*ѡ������*/
void SelectionSort(int array[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int smallest=i;
        for(int j=i+1;j<n;j++)
        {
            if(array[smallest]>array[j])
                smallest=j;
        }
        swap(array,i,smallest);
    }
}

int main()
{
    int array[5]={3,1,2,5,4};
    SelectionSort(array,5);
    for(int i=0;i<5;i++)
        cout<<array[i]<<"  ";
    cout<<endl;
    return 0;
}
