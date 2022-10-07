// ch6payroll.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    std::cout << "Ch 6 Payroll by Kevin Bell\n\n";
	int hours;
	char response='y';
	double rate, pay;
	while (response == 'y' || response == 'Y')
	{
	std::cout << "Enter employee's name: ";
	std::string name;
	std::cin >> name;
	std::cout << "Salaried or hourly? (S/H): ";
	char type;
	std::cin >> type;
	
	
	if (type == 'S' || type == 's')
	{
		std::cout << "Enter annual salary: $";
		double salary;
		std::cin >> salary;
		std::cout << "Pay for this employee: $";
		std::cout << salary / 52 << std::endl << std::endl;
	}
	else if (type == 'H' || type == 'h')
	{
		std::cout << "Enter hourly rate: $";
		std::cin >> rate;
		std::cout << "Enter hours worked: ";
		std::cin >> hours;
		
		if (hours > 40)
		{
			pay = (hours - 40) * (rate * 1.5) + (40 * rate);
		}
		else
		{
			pay = hours * rate;
		}
		std::cout << "Pay for this employee: $"<< pay << std::endl << std::endl;
	}
	else
	{
		std::cout << "Invalid input"<< std::endl << std::endl;
	}

	std::cout << "Do you want to calculate another payroll? (y/n): ";
	std::cin >> response;
	} // end while
	system("pause");
	return 0;
}
