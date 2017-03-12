#include <iostream>
#include <iomanip>
#include <cmath>
#include <cfenv>

int main()
{
	double radius;
	const double pi = 3.14159;
	double volume;
	std::cin >> radius;
	volume = (4.0/3.0)*pi*pow(radius,3.0); 
//	std::fesetround(FE_DOWNWARD);
	std::cout << "VOLUME = " << std::fixed << std::setprecision(3) << volume << std::endl;
	return 0;
}
