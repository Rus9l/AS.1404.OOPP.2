#include "stdafx.h"
#include "Vasenkov_1.h"
#include <iostream>

using namespace std;

Vasenkov_1::Vasenkov_1()
{
}

void Vasenkov_1::f1()
{
	cout << "Виртуальная функция базового класса" << endl;
}
void Vasenkov_1::f2()
{
	cout << "Простая функция базового класса" << endl;
}

Vasenkov_1::~Vasenkov_1()
{
}
