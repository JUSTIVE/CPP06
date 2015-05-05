#include"header.h"
class Random{
public:
	static void seed(){ srand((unsigned)time(0));}
	static int nextInt(int min = 0, int max = 32767){
		return min+(rand() % (max-min));
	}
	static char nextAlphabet(){
		if (rand()%2==0)
			return (char)'a' + rand() % 26;
		else
			return (char)'A' + rand() % 26;
	}
	static double nextDouble(){
		double a = (double)rand();
		double b = (double)rand();
		return (a > b) ? b / a : a / b;
	}

};
void seven()
{
	cout << "1에서 100까지 랜덤한 정수 10개를 출력합니다" << endl;
	for (int i = 0; i < 10; i++)
		cout<<Random::nextInt(1,100)<< ' ';
	cout << endl;
	cout << "알파벳을 랜덤하게 10개를 출력합니다" << endl;
	for (int i = 0; i < 10; i++)
		cout << Random::nextAlphabet() << ' ';
	cout << endl;
	cout << "랜덤한 실수를 10개를 출력합니다" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << Random::nextDouble() << ' ';
		if (i == 4)
			cout << endl;
	}
	cout << endl;
}