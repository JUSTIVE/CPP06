#include"header.h"

int main()
{
	int menu;
	void(*fp[8])() = {one,two,three,four,five,six,seven,eight};
	while (true)
	{
		cout << "몇 번 문제를 보시겠습니까?>>";
		cin >> menu;
		if (menu < 9 && menu>0)
			break;
		else
			cout << "잘못된 입력입니다." << endl;
	}
	fp[menu - 1]();
	return 0;
}