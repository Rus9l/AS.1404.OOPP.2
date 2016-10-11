// lab2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "shadrina.h"
#include <iostream>
#include <Windows.h>
using namespace std;


int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	shadrina o1;   //������ �������� ������
	elina o2;   //������ ������������ ������
	shadrina* p1 = &o1;   //��������� �� ������� �����, �������� �������� ������ �������� ������
	elina* p2 = &o2;   //��������� �� ����������� �����, �������� �������� ������ ������������ ������
	shadrina* p3 = p2;   //��������� �� ������� �����, �������� �������� ������ �� ������� ���������
	cout << "p1:" << endl;
	p1->F1();
	p1->F2();
	cout << "p2:" << endl;
	p2->F1();
	p2->F2();
	cout << "p3:" << endl;
	p3->F1();
	p3->F2();
	cout << "p4:" << endl;
	p4->F1();
	p4->F2();
	system("pause");
}

