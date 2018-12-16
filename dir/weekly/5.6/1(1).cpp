#include <bits/stdc++.h>
using namespace std;
int t1, t2, t3, t[10], f = 1;
int main(){
	for(t[1] = 0; t[1] <= 9; t[1]++){
		for(t[2] = 0; t[2] <= 9; t[2]++){
			for(t[3] = 0; t[3] <= 9; t[3]++){
				for(t[4] = 0; t[4] <= 9; t[4]++){
					for(t[5] = 0; t[5] <= 9; t[5]++){
						for(t[6] = 0; t[6] <= 9; t[6]++){
							for(t[7] = 0; t[7] <= 9; t[7]++){
								for(t[8] = 0; t[8] <= 9; t[8]++){
									for(t[9] = 0; t[9] <= 9; t[9]++){
										t1 = t[1] * 100 + t[2] * 10 + t[3];
										t2 = t[4] * 100 + t[5] * 10 + t[6];
										t3 = t[7] *  100 + t[8] * 10 + t[9];
										f = 1;
										sort(t, t + 9);
										for(int i = 1; i <= 9; i++){
											if(t[i - 1] != i){
												f = 0;
												break;
											}
										}
										if(f && 1.0 * t2 / t1 == 2 && 1.0 * t3 / t1 == 3) cout << t1 << " " << t2 << " " << t3 << endl;
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
