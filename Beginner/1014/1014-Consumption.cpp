#include <iostream>
#include <iomanip>
#include <cmath>


int main()
{
	int x; //total distance in Km
	float y; // total fuel spent
	double avr_consumption;
	std::cin >> x;
	std::cin >> y;
	avr_consumption = x/y;
	std::cout << std::setprecision(3) << std::fixed <<  avr_consumption << " km/l" << std::endl;
	return 0;
}
