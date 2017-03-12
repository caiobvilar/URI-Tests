#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
	int A,B,C;
	int greatest;
	std::cin >> A >> B >> C;
	greatest = (A+B+abs(A-B))/2;
	greatest = (greatest+C+abs(greatest-C))/2;
	std::cout << greatest << " eh o maior" << std::endl;
	return 0;
}
