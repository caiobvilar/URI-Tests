/*
	 	Program Name: 1018-Banknotes
		Description: this program is a solution to the URI-Online Judge Beginners
		Challenges, in particular the Beginner Challenge 1018.
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
	int n,aux;
	int nota_1,nota_2,nota_5,nota_10,nota_20,nota_50,nota_100;
	nota_1 = nota_2 = nota_5 = nota_10 = nota_20 =  nota_50 = nota_100 = 0;
	std::cin >> n;
	aux = n;
	while(n >=100)
	{
		nota_100+=1;
		n = n-100;
	}
	while(n>=50)
	{
		nota_50+=1;
		n = n-50;
	}
	while(n>=20)
	{
		nota_20 +=1;
		n = n-20;
	}
	while(n>=10)
	{
		nota_10 +=1;
		n = n-10;
	}
	while(n>=5)
	{
		nota_5 +=1;
		n = n-5;
	}
	while(n>=2)
	{
		nota_2 +=1;
		n = n-2;
	}
	while(n>=1)
	{
		nota_1+=1;
		n = n-1;
	}

	std::cout << aux << std::endl
		<< nota_100 << " nota(s) de R$ 100,00" << std::endl
		<< nota_50 << " nota(s) de R$ 50,00" << std::endl
		<< nota_20 << " nota(s) de R$ 20,00" << std::endl
		<< nota_10 << " nota(s) de R$ 10,00" << std::endl
		<< nota_5 << " nota(s) de R$ 5,00" << std::endl
		<< nota_2 << " nota(s) de R$ 2,00" << std::endl
		<< nota_1 << " nota(s) de R$ 1,00" << std::endl;
	return 0;
}
