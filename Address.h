#pragma once
#include <string>
using namespace std;

class Address
{
private:
	string zipCode;
	string streetName;
	string city; 
	string streetNo;

public:

	void setZipCode(string zc);
	string getZipCode();

	void setStreetName(string sn);
	string getStreetName();

	void setCity(string c);
	string getCity();

	void setStreetNo(string sn);
	string getStreetNo();

	Address();


};

