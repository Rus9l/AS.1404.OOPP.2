// VasilyukLab2.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include "Vasilyuk_child.h"
#include "Vasilyuk_parent.h"
#include <iostream>



int main()
{
	Vasilyuk_parent* parent1 = new Vasilyuk_parent();
	Vasilyuk_child* child1 = new Vasilyuk_child();
	Vasilyuk_parent* parent2 = child1;
	Vasilyuk_child* child2 = static_cast<Vasilyuk_child*>(parent2);


	parent1->simp();
	parent1->virt();

	std::cout << std::endl;

	child1->simp();
	child1->virt();

	std::cout << std::endl;

	parent2->simp();
	parent2->virt();

	std::cout << std::endl;


	child2->simp();
	child2->virt();
	std::cout << std::endl;

    return 0;
}

