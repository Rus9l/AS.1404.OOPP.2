#include "stdafx.h"
#include "Vasilyuk_parent.h"
#include <iostream>

Vasilyuk_parent::Vasilyuk_parent()
{
}


Vasilyuk_parent::~Vasilyuk_parent()
{
}

void Vasilyuk_parent::simp()
{
	std::cout << "parent simple function " << std::endl;
}

void Vasilyuk_parent::virt()
{
	std::cout << "parent virtual function " << std::endl;
}