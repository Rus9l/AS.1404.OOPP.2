#include "stdafx.h"
#include "child.h"
#include <iostream>


child::child()
{
}


child::~child()
{
}

void child::simp()
{
	std::cout << "child simple function " << std::endl;
}

void child::virt()
{
	std::cout << "child virtual function "<< std::endl;
}