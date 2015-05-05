#include"header.h"

//3-(1)
int big(int a, int b)
{
	return (((a >= b) ? a : b)<100) ? ((a > b) ? a : b):100;
}
int big(int a, int b, int c)
{
	int it;
	if (a >= b)
	{
		if (b >= c)
			it = a;
		if (a > c)
			it = a;
		else
			it = c;
	}
	else
	{
		if (a >= c)
			it = b;
		if (b > c)
			it = b;
		else
			it = c;
	}
	return (it > 50) ? 50 : it;
}
//3-(2)
/*
int big(int a, int b, int c)
{
	int it;
	if (a >= b)
	{
		if (b >= c)
			it = a;
		if (a > c)
			it = a;
		else
			it = c;
	}
	else
	{
		if (a >= c)
			it = b;
		if (b > c)
			it = b;
		else
			it = c;
	}
	return (it > 50) ? 50 : it;
}*/
void three()
{
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);
	cout << x << ' ' << y << ' ' << z << endl;
}
