#pragma once
#include "Address.h"
class Department
{
private:
	Address deptAddress; // Composition 
	string name; 

public:
	void setAddress(Address a);
	Address & getAddress();

	void setName(string n);

	string getName();

	Department();

};

