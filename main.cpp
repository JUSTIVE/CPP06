#include"header.h"

int main()
{
	int menu;
	void(*fp[8])() = {one,two,three,four,five,six,seven,eight};
	while (true)
	{
		cout << "�� �� ������ ���ðڽ��ϱ�?>>";
		cin >> menu;
		if (menu < 9 && menu>0)
			break;
		else
			cout << "�߸��� �Է��Դϴ�." << endl;
	}
	fp[menu - 1]();
	return 0;
}