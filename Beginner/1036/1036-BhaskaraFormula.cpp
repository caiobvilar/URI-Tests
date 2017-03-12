/*
		Program Name: 1036-BhaskaraFormula
		Description: this program is a solution to the URI-Online Judge Beginners
		Challenges, in particular the Beginner Challenge 1036.
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
	float A,B,C,R1,R2,delta;
	std::cin >> A >> B >> C;
	if(A <= 0.0)
	{
		std::cout << "Impossivel calcular" << std::endl;
		return 0;
	}
	delta = pow(B,2.0) -(4.0*A*C);
	if(delta <=0)
	{
		std::cout << "Impossivel calcular" << std::endl;
	}
	else
	{
		R1 = ((-1)*B+sqrt(delta))/(2.0*A);
		R2 = ((-1)*B-sqrt(delta))/(2.0*A);
		std::cout << std::fixed << std::setprecision(5)
							<< "R1 = " << R1 << std::endl
							<< "R2 = " << R2 << std::endl;

	}
	return 0;
}
