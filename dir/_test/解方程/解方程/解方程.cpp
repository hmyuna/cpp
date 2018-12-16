#include <iostream>
using namespace std;
int main() {
	for (int i = 0; i <= 1000; i++)
	{
		if (27 + i == 2 * (19 + (20 - i)))
		{
			cout << i << " " << 20 - i << endl;
		}
	}
	system("pause > nul");
	return 0;
}