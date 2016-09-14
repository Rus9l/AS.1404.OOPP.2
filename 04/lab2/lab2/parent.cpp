#include "stdafx.h"
#include "parent.h"
#include <iostream>


parent::parent()
{
}


parent::~parent()
{
}


void parent::simp()
{
	std::cout << "parent simple function "<< std::endl;
}

void parent::virt()
{
	std::cout << "parent virtual function " << std::endl;
}