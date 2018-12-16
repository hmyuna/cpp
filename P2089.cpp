#include <bits/stdc++.h>
using namespace std;
int t, ans = 0;
int main(){
	cin >> t;
	if(t < 10 || t > 30){
		cout << "0" << endl;
		return 0;
	}
	for(int i = 1; i <= 3; i++){
		for(int j = 1; j <= 3; j++){
			for(int k = 1; k <= 3; k++){
				for(int l = 1; l <= 3; l++){
					for(int m = 1; m <= 3; m++){
						for(int n = 1; n <= 3; n++){
							for(int o = 1; o <= 3; o++){
								for(int p = 1; p <= 3; p++){
									for(int q = 1; q <= 3; q++){
										for(int r = 1; r <= 3; r++){
											if(i + j + k + l + m + n + o + p + q + r == t){
												ans++;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	cout << ans << endl;
	for(int i = 1; i <= 3; i++){
		for(int j = 1; j <= 3; j++){
			for(int k = 1; k <= 3; k++){
				for(int l = 1; l <= 3; l++){
					for(int m = 1; m <= 3; m++){
						for(int n = 1; n <= 3; n++){
							for(int o = 1; o <= 3; o++){
								for(int p = 1; p <= 3; p++){
									for(int q = 1; q <= 3; q++){
										for(int r = 1; r <= 3; r++){
											if(i + j + k + l + m + n + o + p + q + r == t){
												cout << i << " " << j << " " << k << " " << l << " " << m << " " << n << " " << o << " " << p << " " << q << " " << r << " " << endl;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
