
//

// Mark Pytel

// CS5303 homework #5b

//

/*

I understand that using, receiving or giving unauthorized assistance in

writing this assignment is in violation of academic regulations and is subject to academic discipline, including a grade of 0 for this assignment with no chance of a making up the assignment, forfeiture of credit for the course, probation and dismissal from NYU.

By submitting this work I am certifying that I did not cheat!

*/

#include <iostream>

using namespace std;

void DISPLAY_HEADER();
// This function prints out a welcome message to the screen.

double GET_CREDITS();
// This function prints a prompt for the user to input the number
// credits the student is taking, it then returns the value.

double COMPUTE_CHARGES(double credits);
// This function is passed the amount of credits the student is taking
// and then returns the amount of charges he owes for those credits.

void PRINT_BILL(double charges, double credits);
// This function is passed the amount of charges from the COMPUTE_CHARGES
// function, as well as the amount of credits inputted during execution
// of the GET_CREDITS function. It then prints a bill with this information
// for the student.


int main()

{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	char continue_program = 'Y';
	
	while (continue_program == 'Y' || continue_program == 'y')	
	{
	
	double credits_main = 0;
	double charges_main = 0;
	
	DISPLAY_HEADER();
	credits_main = GET_CREDITS();
	charges_main = COMPUTE_CHARGES(credits_main);
	
	if (charges_main != 0)
		{
		PRINT_BILL(charges_main, credits_main);
		}
	
	cout << "\nWould you like to do another calculation? (Y/N)";
	cin >> continue_program;
	cout << "\n";
	
	}	
	
	return 0;

}

void DISPLAY_HEADER()
{
	cout << "WELCOME to MetTech University!\n\n";
}

double GET_CREDITS()
{
	double credits;
	
	cout << "Please enter the amount of credits you wish to register for: ";
	cin >> credits;
	cout << "\n";
	
	return credits;
}

double COMPUTE_CHARGES(double credits)
{
	double credit_input = credits;
	double cpc_lt_12 = 429;
	double cpc_mt_18 = 375;
	double flat_charge = 5500;
	double student_fee = 110;
	double total_tuition = 0;
	double credits_above_18 = 0;	
		
	if ((credit_input <= 24) && (credit_input >= 0))
	{
		if (credit_input < 12)
		{
		total_tuition = (credit_input * cpc_lt_12) + student_fee;
		}
		if ((credit_input >= 12) && (credit_input <= 18))
		{
		total_tuition = flat_charge + student_fee;
		}
		if (credit_input > 18)
		{
		credits_above_18 = credit_input - 18;
		total_tuition = (credits_above_18 * cpc_mt_18) + flat_charge + student_fee;
		}
	}
	
	else
	{
	cout << "Sorry, you cannot register for more than 24 credits." << endl;
	}
		
	return total_tuition;
}

void PRINT_BILL(double charges, double credits)
{
	cout << "You are taking " << credits << " credits." << endl;
	cout << "Your total tuition owed is: $" << charges << endl;
}