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

/*
 * Time Conversion:
 * 1 hour is 3600 seconds
 * 1 minute is 60 seconds
 * */
#include <iostream>
#include <iomanip>

int main()
{
	int time_input,time_seconds,time_minutes,time_hours;
	time_input=time_seconds=time_minutes=time_hours=0;
	std::cin >> time_input;
	while(time_input>=3600)
	{
		time_hours+=1;
		time_input-=3600;
	}
	while(time_input>=60)
	{
		time_minutes+=1;
		time_input-=60;
	}
	while(time_input>=1)
	{
		time_seconds+=1;
		time_input-=1;
	}
	std::cout << time_hours << ":" << time_minutes << ":" << time_seconds << std::endl;
	return 0;
}
