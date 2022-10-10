// ch6payroll.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
double calculatePay(double rate, double hours);
double calculatePay(double salary);


int main()
{
    cout << "Ch 6 Payroll by Kevin Bell\n\n";
	int hours;
	string response ="y";
	double rate, pay;
	while (response == "y" || response == "Y" || response == "Yes" || response == "YES" || response == "yes")
	{
	std::cout << "Enter employee's name: ";
	std::string name;
	std::cin >> name;
	std::cout << "Salaried or hourly? (S/H): ";
	char type;
	std::cin >> type;
	
	while(type != 'S' && type != 's' && type != 'H' && type != 'h')
	{
		std::cout << "Invalid entry. Please enter S or H: ";
		std::cin >> type;
	}
	if (type == 'S' || type == 's')
	{
		std::cout << "Enter annual salary: $";
		double salary;
		std::cin >> salary;
		while (salary < 0)
		{
			std::cout << "Invalid entry. Please enter a positive number: $";
			std::cin >> salary;
		}
		std::cout << "Pay for this employee: $";
		salary = calculatePay(salary);
		std::cout << salary << std::endl << std::endl;
	}
	else if (type == 'H' || type == 'h')
	{
		std::cout << "Enter hourly rate: $";
		std::cin >> rate;
		while(rate < 0)
		{
			std::cout << "Invalid entry. Please enter a positive number: $";
			std::cin >> rate;
		}
		std::cout << "Enter hours worked: ";
		std::cin >> hours;
		while (hours < 0)
		{
			std::cout << "Invalid entry. Please enter a positive number: ";
			std::cin >> hours;
		}
		pay = calculatePay(hours, rate);
		std::cout << "Pay for this employee: $"<< pay << std::endl << std::endl;
	}
	else
	{
		std::cout << "Invalid input"<< std::endl << std::endl;
	}

	std::cout << "Do you want to calculate another paycheck? (y/n): ";
	std::cin >> response;
	
	} // end while
	system("pause");
	return 0;
}

double calculatePay(double salary)
{
	return salary / 52;
}


double calculatePay(double rate, double hours)
{
	double pay;
	if (hours > 40)
	{
		pay = (hours - 40) * (rate * 1.5) + (40 * rate);
	}
	else
	{
		pay = hours * rate;
	}
	return pay;
}
