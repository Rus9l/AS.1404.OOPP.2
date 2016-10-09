// OOPPlab2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "PotomokAlexShilov.h"


int main()
{
	setlocale(LC_CTYPE, "rus");
	BasicAlexShilov* ptrfirst = new BasicAlexShilov;
	PotomokAlexShilov* ptrsecond = new PotomokAlexShilov;
	BasicAlexShilov* ptrthird = ptrsecond;
	PotomokAlexShilov* ptrfourth= static_cast<PotomokAlexShilov*>(ptrthird);
	ptrfirst->prostfunction();
	ptrfirst->virtualfunction();
	ptrsecond->prostfunction();
	ptrsecond->virtualfunction();
	ptrthird->prostfunction();//перекрытие методов
	ptrthird->virtualfunction();
	ptrfourth->prostfunction();
	ptrfourth->virtualfunction();
	system("pause");
}

