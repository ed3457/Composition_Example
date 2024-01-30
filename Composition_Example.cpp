// Composition_Example.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Department.h"
using namespace std; 
int main()
{
    Department csDept; 

    cout << csDept.getName() << endl;

    cout << csDept.getAddress().getCity() << endl;

    Address csDeptAddress = csDept.getAddress();

    Address newDeptAddress;
    newDeptAddress.setCity("Detroit");

    csDept.setAddress(newDeptAddress);

    // csDept.getAddress().setCity("Detroit"); will not change the original object because it is a copy

    cout << csDept.getAddress().getCity() << endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
