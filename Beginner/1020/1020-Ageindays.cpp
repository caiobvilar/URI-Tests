/*
		Program Name: 1019-TimeConversion
		Description: this program is a solution to the URI-Online Judge Beginners
		Challenges, in particular the Beginner Challenge 1019.
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
	int age_input,age_days,age_month,age_years;
	age_input=age_days=age_month=age_years=0;
	std::cin >> age_input;

	while(age_input>=365)
	{
		age_years+=1;
		age_input-=365;
	}
	while(age_input>=30)
	{
		age_month+=1;
		age_input-=30;
	}
	age_days = age_input;
	std::cout << age_years << " ano(s)" << std::endl
						<< age_month <<	" mes(es)" << std::endl
						<< age_days << " dia(s)" << std::endl;
	return 0;
}
