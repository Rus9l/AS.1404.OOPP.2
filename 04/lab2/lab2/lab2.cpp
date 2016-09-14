
#include "stdafx.h"
#include "child.h"
#include "parent.h"
#include <iostream>


int main()
{
	parent* parent1 = new parent();
	child* child1 = new child();
	parent* parent2 = child1;
	child* child2 = dynamic_cast<child*>(parent2);
   

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
}

