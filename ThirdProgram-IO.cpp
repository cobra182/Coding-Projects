/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 */



#include <iostream>
#include <string>
#include <sstream>

using namespace std;
	
int main()
{
	const char newline = '\n';
	string mystring;
	int age;
	float postcode;	
	

	cout << "Please enter your surname:";
	getline (cin,mystring);
	cout << mystring ;
	cout << newline;

	
	cout << "Please enter your age:";
	getline (cin,mystring);
	stringstream(mystring) >> age;
	cout << age ;
	cout << newline;
	
	if (age > 25)
	
		cout << "You are really old....." << newline;
		else
		cout << "You are too young to play." << newline;


while (age < 25)
{
		cout << "You are too young to play....Sorry go away." << newline;
		(age++);
	}
		

	
	cout << "Please enter your Australian/United States postal code:";
	getline (cin,mystring);
	stringstream(mystring) >> postcode;
	cout << postcode << endl;
	
	
	
	return 0;
}

	
