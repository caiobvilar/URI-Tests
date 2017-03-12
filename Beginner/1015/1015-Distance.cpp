#include <iostream>
#include <iomanip>
#include <cmath>


int main()
{
	double x1,x2,y1,y2;
	double distance;
	std::cin >> x1 >> y1;
	std::cin >> x2 >>y2;
	distance = sqrt(pow((x2-x1),2.0) + pow((y2-y1),2.0));
	std::cout << std::setprecision(4) << std::fixed << distance << std::endl;
	return 0;
}
