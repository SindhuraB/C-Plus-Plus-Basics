#pragma once
#include<string>

using namespace std;

class Employee
{
private:
	string empID;
	string lastName;
	string firstName;
	string birthDate;
	char gender;
	string startDate;
	double salary;

public:
	Employee();														//Default constructor
	Employee(string);												//Second constructor. Takes in employee id only
	Employee(string, string, string, string, char, string, double);	//Third constructor. Takes in all employee info

	void setEmpID(string);
	void setLastName(string);
	void setFirstName(string);
	void setBirthDate(string);
	void setGender(char);
	void setStartDate(string);
	void setSalary(double);
	
	string getEmpID();
	string getLastName();
	string getFirstName();
	string getBirthDate();
	char getGender();
	string getStartDate();
	double getSalary();
	
	~Employee();													//Destructor
};