#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <cfenv>


int main()
{
	std::string name;
	float fixed_salary;
	float sales,total;
	const float comission = 0.15;
	std::cin >> name;
	std::cin >> fixed_salary;
	std::cin >> sales;
	total = fixed_salary + (sales*comission);
	std::fesetround(FE_DOWNWARD);
	std::cout << "TOTAL = R$ " << std::setprecision(2) << std::fixed << total << std::endl;
	return 0;
}
