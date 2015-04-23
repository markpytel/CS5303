
//

// Mark Pytel

// CS5303 homework #6

//

/*

I understand that using, receiving or giving unauthorized assistance in

writing this assignment is in violation of academic regulations and is subject to academic discipline, including a grade of 0 for this assignment with no chance of a making up the assignment, forfeiture of credit for the course, probation and dismissal from NYU.

By submitting this work I am certifying that I did not cheat!

*/

#include <iostream>

using namespace std;

int get_input();
// This function asks the user for the number of inches
// and returns it as an integer.

int make_conversion(int& mc_inches, int& mc_feet, int& mc_yards);
// This function accepts the input and uses the call_by_reference
// mechanism to ensure the values of inches feet and yards 
// are changed in main() itself.

void display_results(int original_input, int inches, int yards, int feet);
// This function prints out the results of the conversion


int main()

{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	char continue_program = 'Y';
	
	while (continue_program == 'Y' || continue_program == 'y')	
	{
		int inches = 0;
		int yards = 0;
		int feet = 0;
		int original_input = 0;
		
		original_input = get_input();
		inches = original_input;
		
		make_conversion(inches, yards, feet);
		
		display_results(original_input, inches, yards, feet);
		
		cout << "\nWould you like to perform another calculation: (Y/N)?";
		cin >> continue_program;
		cout << "\n";
	}	
	
	return 0;

}

int get_input()
{
	int inches;
	cout << "Please enter the number of inches you would like to convert: ";
	cin >> inches;
	cout << "\n";
	
	return inches;
}

int make_conversion(int& mc_inches, int& mc_yards, int& mc_feet)
{
	int mc_inches_remainder1;
	int mc_inches_remainder2;
	
	mc_yards = mc_inches / 36;
	mc_inches_remainder1 = mc_inches % 36;
	mc_feet = mc_inches_remainder1 / 12;
	mc_inches_remainder2 = mc_inches_remainder1 % 12;
	mc_inches = mc_inches_remainder2;
	
	return 0;
}


void display_results(int original_input, int inches, int yards, int feet)
{
	int dr_original_input = original_input;
	int dr_inches = inches;
	int dr_yards = yards;
	int dr_feet = feet;
	
	string foot_feet = "feet";
	string yard_yards = "yards";
	string inch_inches = "inches";
	string orig_inch_inches = "inches";
	
	if (dr_original_input == 1)
	{
		orig_inch_inches = "inch";
	}
	
	if (dr_feet == 1)
	{
		foot_feet = "foot";
	}
	
	if (dr_yards == 1)
	{
		yard_yards = "yard";
	}
	
	if (dr_inches == 1)
	{
		inch_inches = "inch";
	}
		
	cout << dr_original_input << " " << orig_inch_inches << " is equivalent to " << dr_yards << " " << yard_yards << ", " << dr_feet << " " << foot_feet << " and " << dr_inches << " " << inch_inches << ".\n";
}

