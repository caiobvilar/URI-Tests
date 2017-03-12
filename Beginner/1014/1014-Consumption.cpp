/*
		Program Name: 1014-Consumption
		Description: this program is a solution to the URI-Online Judge Beginners
		Challenges, in particular the Beginner Challenge 1014.
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
	int x; //total distance in Km
	float y; // total fuel spent
	double avr_consumption;
	std::cin >> x;
	std::cin >> y;
	avr_consumption = x/y;
	std::cout << std::setprecision(3) << std::fixed <<  avr_consumption << " km/l" << std::endl;
	return 0;
}
