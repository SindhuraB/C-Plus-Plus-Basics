#include "stdafx.h"
#include "Employee.h"

Employee::Employee()
{
}

Employee::Employee(string id)
{
	empID = id;
}

Employee::Employee(string id, string ln, string fn, string bd, char gd, string sd, double sl)
{
	empID = id;
	lastName = ln;
	firstName = fn;
	birthDate = bd;
	gender = gd;
	startDate = sd;
	salary = sl;
}

/***********************************************************************/
void Employee::setEmpID(string id)
{
	empID = id;
}

void Employee::setLastName(string ln)
{
	lastName = ln;
}

void Employee::setFirstName(string fn)
{
	firstName = fn;
}

void Employee::setBirthDate(string bd)
{
	birthDate = bd;
}

void Employee::setGender(char gd)
{
	gender = gd;
}

void Employee::setStartDate(string sd)
{
	startDate = sd;
}

void Employee::setSalary(double sl)
{
	salary = sl;
}

/***********************************************************************/
string Employee::getEmpID()
{
	return empID;
}

string Employee::getLastName()
{
	return lastName;
}

string Employee::getFirstName()
{
	return firstName;
}

string Employee::getBirthDate()
{
	return birthDate;
}

char Employee::getGender()
{
	return gender;
}

string Employee::getStartDate()
{
	return startDate;
}

double Employee::getSalary()
{
	return salary;
}

/***********************************************************************/

Employee::~Employee()
{
}
