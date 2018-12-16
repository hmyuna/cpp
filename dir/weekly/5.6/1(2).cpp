#include <iostream>
#include <algorithm>
using namespace std;
int tmp[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, f = 1;
int main() {
    int ta, tb, tc;
    do
    {
        ta = tmp[0] * 100 + tmp[1] * 10 + tmp[2];
        tb = tmp[3] * 100 + tmp[4] * 10 + tmp[5];
        tc = tmp[6] * 100 + tmp[7] * 10 + tmp[8];
        if (1.0 * ta / tb == 1.0 * 1 / 2 && 1.0 * ta / tc == 1.0 * 1 / 3 && 1.0 * tb / tc == 1.0 * 2 / 3) {
            cout << ta << " " << tb << " " << tc << " " << endl;
            f = 0;
        }
    }while (next_permutation(tmp, tmp + 9));
    if (f) cout << "No!!!" << endl;
    return 0;
}
