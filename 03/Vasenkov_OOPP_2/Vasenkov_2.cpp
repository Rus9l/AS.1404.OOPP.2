#include "stdafx.h"
#include "Vasenkov_2.h"
#include <iostream>

using namespace std;

Vasenkov_2::Vasenkov_2()
{
}
void Vasenkov_2::f1()
{
	cout << "Виртуальная функция клааса потомка" << endl;
}
void Vasenkov_2::f2()
{
	cout << "Простая функция класса потомка" << endl;
}

Vasenkov_2::~Vasenkov_2()
{
}
