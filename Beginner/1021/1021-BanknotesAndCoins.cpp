/*
	 	Program Name: 1021-BanknotesAndCoins
		Description: this program is a solution to the URI-Online Judge Beginners
		Challenges, in particular the Beginner Challenge 1021.
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

	int nota_2,nota_5,nota_10,nota_20,nota_50,nota_100;

	int moeda_1,moeda_05,moeda_025,moeda_010,moeda_005,moeda_001;

	moeda_1=moeda_05=moeda_025=moeda_010=moeda_005=moeda_001=0.0;

	nota_2 = nota_5 = nota_10 = nota_20 =  nota_50 = nota_100 = 0.0;

	std::cin >> n;

	while(n >=100)
	{
		nota_100+=1;
		n-=100;
	}
	while(n>=50)
	{
		nota_50+=1;
		n-=50;
	}
	while(n>=20)
	{
		nota_20 +=1;
		n -=20;
	}
	while(n>=10)
	{
		nota_10 +=1;
		n -=10;
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
		moeda_1+=1;
		n -=1;
	}
	while(n>=0.5)
	{
		moeda_05+=1;
		n-=0.5;
	}
	while(n>=0.25)
	{
		moeda_025=+1;
		n-=0.25;
	}
	while(n>=0.10)
	{
		moeda_010+=1;
		n-=0.10;
	}
	while(n>=0.05)
	{
		moeda_005+=1;
		n-=0.05;
	}
	while(n>=0.01)
	{
		moeda_001+=1;
		n-=0.01;
	}

	std::cout << "NOTAS:" << std::endl
		<< nota_100 << " nota(s) de R$ 100.00" << std::endl
		<< nota_50 << " nota(s) de R$ 50.00" << std::endl
		<< nota_20 << " nota(s) de R$ 20.00" << std::endl
		<< nota_10 << " nota(s) de R$ 10.00" << std::endl
		<< nota_5 << " nota(s) de R$ 5.00" << std::endl
		<< nota_2 << " nota(s) de R$ 2.00" << std::endl
		<< "MOEDAS:" << std::endl
		<< moeda_1 << " moeda(s) de R$ 1.00" << std::endl
		<< moeda_05 << " moeda(s) de R$ 0.50" << std::endl
		<< moeda_025 << " moeda(s) de R$ 0.25" << std::endl
		<< moeda_010 << " moeda(s) de R$ 0.10" << std::endl
		<< moeda_005 << " moeda(s) de R$ 0.05" << std::endl
		<< moeda_001 << " moeda(s) de R$ 0.01" << std::endl;
	return 0;
}
