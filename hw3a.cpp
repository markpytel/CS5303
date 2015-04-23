
//

// Mark Pytel

// CS5303 homework #3a

//

/*

I understand that using, receiving or giving unauthorized assistance in

writing this assignment is in violation of academic regulations and is subject to academic discipline, including a grade of 0 for this assignment with no chance of a making up the assignment, forfeiture of credit for the course, probation and dismissal from NYU.

By submitting this work I am certifying that I did not cheat!

*/

#include <iostream>

using namespace std;



int main()

{

	int inches_input;
		
	cout << "Input a whole number of inches less than 5280: " << endl;
	cin >> inches_input;
	
	int yards;
	int feet;
	int inches_remainder_1;
	int inches_remainder_2;
	int inches;
	
	yards = inches_input / 36;
	inches_remainder_1 = inches_input % 36;
	feet = inches_remainder_1 / 12;
	inches_remainder_2 = inches_remainder_1 % 12;
	inches = inches_remainder_2;
	
	
	if (inches_input < 5280)
	{
		cout << "Program will continue." << endl;
		cout << "There are " << yards << " yards, " << feet << " feet, and " << inches << " inches in " << inches_input << " inches." << endl;
	}
	
	else
	{
		cout << "Sorry, you were asked to input a number less than 5,280." << endl;
	}
	
	return 0;

}