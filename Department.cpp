#include "Department.h"

void Department::setAddress(Address a)
{
    deptAddress = a;
}

Address Department::getAddress()
{
    return deptAddress;
}

void Department::setName(string n)
{
    name = n;
}

string Department::getName()
{
    return name;
}

Department::Department()
{
    name = "Not set";
    // what happens to the Address? 
}
