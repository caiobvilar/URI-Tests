#include <iostream>
#include <iomanip>

int main()
{
	int spent_time,avr_speed;
	double liters_needed;
	std::cin >> spent_time >> avr_speed;
	liters_needed = (avr_speed*spent_time)/12.0;
	std::cout << std::fixed << std::setprecision(3) << liters_needed << std::endl;
	return 0;
}
