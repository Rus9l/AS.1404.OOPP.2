// Gordienko_LR2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

using namespace std;

class Gordienko_First // базовый класс
{
public:
	virtual void f1()
	{
		cout << "Virtual function base class" << endl;
	}
	void f2()
	{
		cout << "Simple function base class" << endl;
	}

};



class Gordienko_Second: public Gordienko_First // потомок
{
public:
	virtual void f1()
	{
		cout << "Virtual function arbitrary class" << endl;
	}
	 void f2()
	{
		cout << "Simple function arbitrary class" << endl;
	}

};




int main()
{
	

	Gordienko_First *ptr1;
	Gordienko_First base_obj;
	 
	ptr1 = &base_obj;
	
	Gordienko_Second *ptr2;
	Gordienko_Second arb_obj;

	ptr2 = &arb_obj;

	Gordienko_First *ptr3;

	ptr3 = &arb_obj;

	Gordienko_Second *ptr4;

	ptr4 = static_cast <Gordienko_Second*>(&arb_obj);

	ptr1->f1();
	ptr1->f2();
	cout<<endl;
	ptr2->f1();
	ptr2->f2();
	cout << endl;
	ptr3->f1();
	ptr3->f2();
	cout << endl;
	ptr4->f1();
	ptr4->f2();

	system("pause");

    return 0;
}

