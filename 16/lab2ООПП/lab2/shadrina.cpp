#include "stdafx.h"
#include "shadrina.h"
#include <iostream>
using namespace std;


shadrina::shadrina()
{

}


shadrina::~shadrina()
{
}

void shadrina::F1()
{
	cout << "Простая функция F1 базового класса\n";
};

void shadrina::F2()
{
	cout << "Виртуальная функция F2 базового класса\n";
};

elina::elina()
{
}

elina::~elina()
{
}

void elina::F1()
{
	cout << "Простая функция F1 производного класса\n";
};

void elina::F2()
{
	cout << "Виртуальная функция F2 производного класса\n";
};