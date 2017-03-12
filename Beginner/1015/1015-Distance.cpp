/*
		Program Name: 1015-Distance
		Description: this program is a solution to the URI-Online Judge Beginners
		Challenges, in particular the Beginner Challenge 1015.
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
