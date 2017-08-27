#include "Employee.h"

Employee::Employee(int i, std::string f, std::string l, int s)
{
	_id = i;
	_firstName = f;
	_lastName = l;
	_salary = s;
}

int Employee::GetID()
{
	return _id;
}

std::string Employee::GetFirstName()
{
	return _firstName;
}

std::string Employee::GetLastName()
{
	return _lastName;
}

std::string Employee::GetName()
{
	return _firstName + _lastName;
}

int Employee::GetSalary()
{
	return _salary;
}

int Employee::GetAnnualSalary()
{
	return _salary * 12;
}

void Employee::SetSalary(int salary)
{
	_salary = salary;
}

int Employee::RaiseSalary(int percent)
{
	percent = percent / 100;
	_salary = (_salary * percent) + _salary;
	return _salary;
}

std::string Employee::Print()
{
	std::string print; 
	print = "Employee [";
	print += _id;
	print += ", ";
	print += _firstName;
	print += " ";
	print += _lastName;
	print += ", ";
	print += _salary;
	print += "]";
	return print;
}
