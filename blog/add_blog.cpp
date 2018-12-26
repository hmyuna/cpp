#include <bits/stdc++.h>
using namespace std;
char *a;
char b[1001] = {'h', 'e', 'x', 'o', ' ', 'n', 'e', 'w', ' ', 'p', 'o', 's', 't', ' '};
int main(int argc, char *argv[])
{
	a = argv[1];
	strcat(b, a);
	system(b);
	return 0;
}
