// Vasenkov_OOPP_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Vasenkov_1.h"
#include "Vasenkov_2.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	Vasenkov_1 *pt1;
	Vasenkov_1 base;

	pt1 = &base;

	Vasenkov_2 *pt2;
	Vasenkov_2 arbit;

	pt2 = &arbit;

	Vasenkov_1 *pt3;

	pt3 = &arbit;

	Vasenkov_2 *pt4;
	pt4 = static_cast <Vasenkov_2*>(&arbit);

	pt1->f1();
	pt1->f2();
	cout << endl;
	pt2->f1();
	pt2->f2();
	cout << endl;
	pt3->f1();
	pt3->f2();
	cout << endl;
	pt4->f1();
	pt4->f2();

	system("pause");

    return 0;
}

