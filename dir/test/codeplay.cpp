
using namespace std;
int main(int argc, char** Path){
	char P[1000];
	int t, len = 0;
	char tmp;
	if(argc == 1){
		while(1){
			scanf("%c", &tmp);
			if(tmp == '\n') break;
			P[len++] = tmp;
		}
	}else{
	
	//cout << P;
	t = clock() / (double) CLOCKS_PER_SEC;
	system(P);
	cout << endl << "Used " << (clock() / (double) CLOCKS_PER_SEC) - t << "s" << endl;
	system("pause > nul");
	return 0;
}