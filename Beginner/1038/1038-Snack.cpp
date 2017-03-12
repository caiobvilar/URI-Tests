/*
	 	Program Name: 1038-Snack
		Description: this program is a solution to the URI-Online Judge Beginners
		Challenges, in particular the Beginner Challenge 1038.
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
	int code,amount;
	double total;
	std::cin >> code >> amount;
	switch(code)
	{
		case 1://cachorro quente
						total = 4.00*amount;
						break;
		case 2://x-salada
						total = 4.50*amount;
						break;
		case 3://x-bacon
						total = 5.00*amount;
						break;
		case 4://torrada simples
						total = 2.00*amount;
						break;
		case 5://refrigerante
						total = 1.50*amount;
						break;
	}
	std::cout << "Total: R$ " << std::setprecision(2) << std::fixed << total << std::endl;
	return 0;
}
