/*
		Program Name: 1035-SelectionTest1
		Description: this program is a solution to the URI-Online Judge Beginners
		Challenges, in particular the Beginner Challenge 1035.
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
	int A,B,C,D;
	std::cin >> A >> B >> C >> D;
	if((B>C) && (D>A) && ((C+D)>(A+B)) && ((C*D) > 0) && (A%2==0))
	{
		std::cout << "Valores aceitos" << std::endl;
	}
	else
	{
		std::cout << "Valores nao aceitos" << std::endl;
	}
	return 0;
}
