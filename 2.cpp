#include"header.h"
class Person {
	int id;
	double weight;
	string name;
public:
	//2-(1)
	/*
	Person(){
		id=1;
		name="Grace";
		weight=20.5;
	}
	Person(int id, string name)
	{
		this->id = id;
		this->name = name;
		this->weight=20.5;
	}
	Person(int id, string name,double weight)
	{
		this->id = id;
		this->name = name;
		this->weight=weight;
	}
	*/
	//2-(2)
	Person(int id =1, string name="Grace", double weight=20.5)
	{		
		this->id = id;
		this->name = name;
		this->weight = weight;
	}
	void show(){ cout << id << ' ' << weight <<' '<<name<< endl; }

};
void two()
{
	Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
	grace.show();
	ashley.show();
	helen.show();
}