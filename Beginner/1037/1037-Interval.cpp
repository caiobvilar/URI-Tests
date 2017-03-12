/*
		Program Name: 1037-Interval
		Description: this program is a solution to the URI-Online Judge Beginners
		Challenges, in particular the Beginner Challenge 1037.
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

int main()
{
	float n;
	std::cin >> n;
	if(n<0.0 || n>100.0)
	{
		std::cout << "Fora de intervalo" << std::endl;
		return 0;
	}
	if(n>=0.0 && n<=25.0)
	{
		std::cout << "Intervalo [0,25]" << std::endl;
		return 0;
	}
	if(n>25.0 && n<=50.0)
	{
		std::cout << "Intervalo (25,50]" << std::endl;
		return 0;
	}
	if(n>75.0 && n<=100)
	{
		std::cout << "Intervalo (75,100]" << std::endl;
		return 0;
	}
	return 0;
}
