#include "Address.h"

void Address::setZipCode(string zc)
{
	zipCode = zc;
}

string Address::getZipCode()
{
	return zipCode;
}

void Address::setStreetName(string sn)
{
	streetName = sn;
}

string Address::getStreetName()
{
	return streetName;
}

void Address::setCity(string c)
{
	city = c;
}

string Address::getCity()
{
	return city;
}

void Address::setStreetNo(string sn)
{
	streetNo = sn;
}

string Address::getStreetNo()
{
	return streetNo;
}

Address::Address()
{
	setCity("Not set yet");
	setZipCode("Not set yet");
	setStreetName("Not set yet");
	setStreetNo("Not set yet");
}
