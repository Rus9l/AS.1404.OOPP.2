// OOPP_2_Sazonov.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "SecondClass_sazonov144.h"

int main()
{
	FirstClass_sazonov144* pnt1 = new FirstClass_sazonov144;
	SecondClass_sazonov144* pnt2 = new SecondClass_sazonov144;
	FirstClass_sazonov144* pnt3 = pnt2;
	SecondClass_sazonov144* pnt4 = static_cast<SecondClass_sazonov144*>(pnt3);


	pnt1->SimpFun();
	pnt1->VirFun();
     
	cout << endl;

	pnt2->SimpFun();
	pnt2->VirFun();

	cout << endl;

	pnt3->SimpFun();
	pnt3->VirFun();

	cout << endl;

	pnt4->SimpFun();
	pnt4->VirFun();

	system("pause");
}

