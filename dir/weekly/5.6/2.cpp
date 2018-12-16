#include <bits/stdc++.h>
using namespace std;
long long l = 1, r, mid, n;//l:左边指针， r:右边， mid：中间， n输入
int main(){
    cin >> n;//读入数据
    r = n;//赋值右指针（l~r，1~n）
    while(l < r){//二分还有
        mid = (l + r) / 2;//取中间
        if(mid * (mid + 1) / 2 < n/*最右边为i * (i + 1) / 2*/) l = mid + 1;//太小了
        else r = mid;//太大了
    }
	int tmp = n - l * (l - 1) / 2;//计算分子
    if(l % 2 == 0) cout << tmp << '/' << l + 1 - tmp << endl;//为偶
    else cout << l + 1 - tmp << '/'<< tmp << endl;//是奇数
    return 0;
}
