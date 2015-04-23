
//

// Mark Pytel

// CS5303 homework #9

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

	char rerun = 'Y';
	
	while (rerun == 'Y' || rerun == 'y')
	{
	
		long int number;
		int index_pos;
		bool repeated_digit = false;
		
		bool digits_seen[10] = {false, false, false, false, false, false, false, false, false, false};
	
	
		cout << "Please enter a number: ";
		cin >> number;
		cout << "\n";
		
		
		while (number != 0)
		{
			index_pos = number % 10;
			
			if (digits_seen[index_pos] == true)
			{
				repeated_digit = true;
			}
			else
			{
				digits_seen[index_pos] = true;
			}
			
			number = number / 10;
			
			
		}
	
		if (repeated_digit == true)
		{
			cout << "It has a repeated digit\n";
		}
		else
		{
			cout << "No repeated digit\n";
		}
	
		cout << "\nDo you want to enter another number? (y/n)";
		cin >> rerun;
		cout << "\n";
		
		
	}
	

	return 0;

}