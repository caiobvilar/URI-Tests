#include <iostream>
#include <iomanip>


int main()
{
	int number,hours_worked;
	float hourpay,salary;
	std::cin >> number;
	std::cin >> hours_worked;
	std::cin >> hourpay;
	salary = (hours_worked*hourpay);
	std::cout << "NUMBER = " << number << std::endl;
	std::cout << "SALARY = U$ " << std::fixed <<std::setprecision(2) << salary << std::endl;
	return 0;
}
