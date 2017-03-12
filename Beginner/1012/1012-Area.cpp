#include <iostream>
#include <iomanip>
#include <cmath>


int main()
{
	double A,B,C;
	const double pi = 3.14159;
	std::cin >> A >> B >> C;
	double Ar_Tri,Ar_Trap,Ar_Circ,Ar_Quad,Ar_Ret;
	Ar_Tri = (A*C)/2;
	Ar_Trap = ((A+B)/2)*C;
	Ar_Circ = pi*pow(C,2.0);
	Ar_Quad = pow(B,2.0);
	Ar_Ret = A*B;
	std::cout << std::setprecision(3) << std::fixed
						<<	"TRIANGULO: " << Ar_Tri << std::endl
						<<	"CIRCULO: "	<< Ar_Circ << std::endl
						<<	"TRAPEZIO: " << Ar_Trap << std::endl
						<<	"QUADRADO: " << Ar_Quad << std::endl
						<<	"RETANGULO: " << Ar_Ret << std::endl;
	return 0;

}
