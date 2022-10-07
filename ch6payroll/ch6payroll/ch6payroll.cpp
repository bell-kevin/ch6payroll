// ch6payroll.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Ch 6 Payroll by Kevin Bell\n\n";
	int hours;
	double rate, pay;
	std::cout << "Enter employee's name: ";
	std::string name;
	std::cin >> name;
	std::cout << "Salaried or hourly? (S/H): ";
	char type;
	std::cin >> type;
	std::cout << "Enter annual salary: ";
	double salary;
	std::cin >> salary;
	std::cout << "Pay for this employee: $";
	if (type == 'S' || type == 's')
	{
		std::cout << salary / 52;
	}
	else if (type == 'H' || type == 'h')
	{
		std::cout << "Enter hours worked: ";
		std::cin >> hours;
		std::cout << "Enter hourly rate: ";
		std::cin >> rate;
		if (hours > 40)
		{
			pay = (hours - 40) * (rate * 1.5) + (40 * rate);
		}
		else
		{
			pay = hours * rate;
		}
		std::cout << pay;
	}
	else
	{
		std::cout << "Invalid input";
	}

	
	if (type == 'S' || type == 's')
	{
		std::cout << "Enter salary: ";
		double salary;
		std::cin >> salary;
		pay = salary / 52;
	}
	else if (type == 'H' || type == 'h')
	{
		std::cout << "Enter hours worked: ";
		std::cin >> hours;
		std::cout << "Enter hourly rate: ";
		std::cin >> rate;
		pay = hours * rate;
	}
	else
	{
		std::cout << "Invalid input. Please try again.";
	}
	system("pause");
	return 0;
}