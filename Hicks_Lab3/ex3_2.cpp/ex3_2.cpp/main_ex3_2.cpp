#include<iostream>
#include"ex3_2.h"
using namespace std;

int main()
{
	// Total number of employees
	int SIZE;	
	cout << "Enter number of employees: ";
	cin >> SIZE;	
	// Dynamic Array of employees
	Employee* emp_arr = new Employee[SIZE];
	// Input Employee Info
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter employee name: " << i + 1 << ": " << endl;
		cin >> emp_arr[i].employee_name;

		cout << "Enter employee SSN: " << i + 1 << ": " << endl;
		cin >> emp_arr[i].employee_ssn;
	}
	// Display Employee Info
	cout << endl;
	for (int i = 0; i < SIZE; ++i)
	{
		cout << "Employee " << i + 1 << ": " << endl;
		cout << "Name: " << emp_arr[i].employee_name << endl;
		cout << "SSN: " << emp_arr[i].employee_ssn << endl;
	}
	delete[]emp_arr;
	return 0;
}