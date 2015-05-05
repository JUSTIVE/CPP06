#include"header.h"
class ArrayUtility2
{
	public:
	static int* concat(int s1[],int s2[],int size)
	{
		int* s = new int[size * 2];
		for (int i = 0; i < size; i++)
			s[i] = s1[i];
		for (int i = 0; i < size; i++)
		{
			s[size + i] = s2[i];
		}
		return s;
	}
	static int* remove(int s1[], int s2[], int size, int& retSize)
	{
		int k=0;
		int *temp = new int[retSize];
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (s1[i] == s2[j])
				{
					retSize--;
					continue;
				}
			}
			temp[k++] = s1[i];
			
		}
		if (retSize == 0)
			return NULL;
		int *s = new int[retSize];
		for (int i = 0; i < retSize; i++)
			s[i]=temp[i];
		return s;
	}
};
void six()
{
	int size = 5;
	int *s1 = new int[size];
	int *s2 = new int[size];
	cout << "������ 5�� �Է��϶�. �迭 x�� �����Ѵ�>>";
	for (int i = 0; i < size; i++)
		cin >> s1[i];
	cout << "������ 5�� �Է��϶�. �迭 y�� �����Ѵ�>>";
	for (int i = 0; i < size; i++)
		cin >> s2[i];
	cout << "��ģ ���� �迭�� ����Ѵ�" << endl;
	int *add = ArrayUtility2::concat(s1, s2, 5);
	for (int i = 0; i < size*2; i++)
	{
		cout << add[i]<<' ';
	}
	cout << endl;
	int *sub = ArrayUtility2::remove(s1, s2, size, size);
	cout << "�迭 x[]���� y[]�� �� ����� ����Ѵ�. ������" << size << "��"<<endl;
	for (int i = 0; i < size; i++)
		cout << sub[i];
	cout << endl;
}