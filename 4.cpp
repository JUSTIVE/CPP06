#include"header.h"
class Myvector{
	int*mem;
	int size;
public:
	Myvector(int n=100,int val=0){
		mem = new int[n];
		size = n;
		for (int i = 0; i < size; i++)mem[i] = val;
	}
	void print()
	{
		for (int i = 0; i < size; i++)
			cout << mem[i];
	}
};
void four()
{
	Myvector initalized;
	Myvector noninitialized(10, 3);
	initalized.print();
	noninitialized.print();
}