/*
		Program Name: 1012-Area
		Description: this program is a solution to the URI-Online Judge Beginners
		Challenges, in particular the Beginner Challenge 1012.
    Copyright (C) 2017  Caio José Borba Vilar Guimarães <caio.b.vilar@gmail.com>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
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
