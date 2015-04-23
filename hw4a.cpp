
//

// Mark Pytel

// CS5303 homework #4a

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
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	double credit_input = 0;
	double cpc_lt_12 = 429;
	double cpc_mt_18 = 375;
	double flat_charge = 5500;
	double student_fee = 110;
	double total_tuition = 0;
	double credits_above_18 = 0;	
	
	
	cout << "Please enter the total amount of credits you are taking: ";
	cin >> credit_input;
	cout << endl;
	
	if ((credit_input <= 24) && (credit_input >= 0))
	{
	
		if (credit_input < 12)
		{
		total_tuition = (credit_input * cpc_lt_12) + student_fee;
	
		cout << "You are taking " << credit_input << " credits." << endl;
		cout << "Your total tuition owed is: $" << total_tuition << endl;
		}
		if ((credit_input >= 12) && (credit_input <= 18))
		{
		total_tuition = flat_charge + student_fee;
		
		cout << "You are taking " << credit_input << " credits." << endl;
		cout << "Your total tuition owed is: $" << total_tuition << endl;		
		}
		if (credit_input > 18)
		{
		credits_above_18 = credit_input - 18;
		total_tuition = (credits_above_18 * cpc_mt_18) + flat_charge + student_fee;
		
		cout << "You are taking " << credit_input << " credits." << endl;
		cout << "Your total tuition owed is: $" << total_tuition << endl;		
		}
	
	}
	
	else
	{
	cout << "Sorry you cannot register for more than 24 credits." << endl;
	}
	
	
	
	return 0;

}