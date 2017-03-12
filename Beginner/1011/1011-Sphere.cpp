/*
		Program Name: 1011-Sphere
		Description: this program is a solution to the URI-Online Judge Beginners
		Challenges, in particular the Beginner Challenge 1011.
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
