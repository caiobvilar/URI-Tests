/*
		Program Name: 1010-SimpleCalculate
		Description: this program is a solution to the URI-Online Judge Beginners
		Challenges, in particular the Beginner Challenge 1010.
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
#include <cfenv>



int main()
{
	int prod_code,prod_quant;
	float prod_price,total;
	std::cin >> prod_code >> prod_quant >> prod_price;
	total = prod_quant*prod_price;
	std::cin >> prod_code >> prod_quant >> prod_price;
	total += prod_quant*prod_price;
	std::cout << "VALOR A PAGAR: R$ " << std::setprecision(2) << std::fixed << total << std::endl;
	return 0;
}
