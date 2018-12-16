#include <bits/stdc++.h>
using namespace std;
int main(){
	for(int i = 10; i * 809 + 1 < 10000; i++){
		if(i * 8 < 100 && i * 9 > 100){
			int ans = i * 809 + 1;
			cout << "   809\n";
			cout << i << ")--------\n";
			cout << " ) " << ans << "\n";
			cout << "   " << ans / 100 << "\n";
			cout << "   " << i * 8 << "\n";
			cout << "  ---------" << endl;
			cout << "    " << (ans / 100 - i * 8) * 100 + ans % 100 << "\n";
			cout << "    " << i * 9 << endl;
			cout << "  ---------" << endl;
			cout << "      " << (ans / 100 - i * 8) * 100 + ans % 100 - i * 9 << endl;
		}
	}
	return 0;
}
