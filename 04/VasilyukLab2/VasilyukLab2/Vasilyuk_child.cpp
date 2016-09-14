#include "stdafx.h"
#include "Vasilyuk_child.h"
#include <iostream>

Vasilyuk_child::Vasilyuk_child()
{
}


Vasilyuk_child::~Vasilyuk_child()
{
}

void Vasilyuk_child::simp()
{
	std::cout << "child simple function " << std::endl;
}

void Vasilyuk_child::virt()
{
	std::cout << "child virtual function " << std::endl;
}