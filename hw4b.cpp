
//

// Mark Pytel

// CS5303 homework #4b

//

/*

I understand that using, receiving or giving unauthorized assistance in

writing this assignment is in violation of academic regulations and is subject to academic discipline, including a grade of 0 for this assignment with no chance of a making up the assignment, forfeiture of credit for the course, probation and dismissal from NYU.

By submitting this work I am certifying that I did not cheat!

*/

#include <iostream>
#include <math.h>

using namespace std;

int main()

{
		
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
		
	char calculation = 'y';
	
	while ((calculation == 'y') || (calculation == 'Y'))
	{
	
	int month = 0;
	double goal = 0;
	double monthly_deposit = 0;
	double monthly_interest_rate = 0;
	double balance = 0;
	double interest_paid = 0;
	double total_interest_paid = 0;
	double final_deposit = 0;
	double yearly_interest_rate_input = 0;
	double yearly_interest_rate = 0;	
	
	cout << "Please enter the amount of the down payment $: ";
	cin >> goal;
	cout << endl;
	
	cout << "Please enter the yearly interest rate %: ";
	cin >> yearly_interest_rate_input;
	yearly_interest_rate = yearly_interest_rate_input / 100;
	monthly_interest_rate = yearly_interest_rate / 12;
	cout << endl;
	
	cout << "Please enter amount of the monthly payment $: ";
	cin >> monthly_deposit;
	cout << endl;
	
	cout << "MONTH		BALANCE		PAYMENT		INTEREST	SHORTAGE" << endl;
	cout << endl;
	
	double shortage = goal - balance;
	
	while ((round(balance * 100) / 100) != goal)
	{
		month++;
		
		shortage = shortage - monthly_deposit - interest_paid;		
		
		cout << month << "		" << balance << "		" << monthly_deposit << "		" << interest_paid << "		" << shortage << endl;
		
		total_interest_paid = total_interest_paid + interest_paid;
		
		balance = balance + monthly_deposit + interest_paid;
		
		interest_paid = balance * monthly_interest_rate;
				
		if (shortage < (monthly_deposit + interest_paid))
		{
			final_deposit = shortage - interest_paid;
			monthly_deposit = final_deposit;
			
		}
		
		
		
	}
	
	cout << endl;
	cout << "Total amount of months needed: " << month << endl;
	cout << endl;
	cout << "Total interest earned: " << total_interest_paid << endl;
	cout << endl;
	
	cout << "Would you like to do another calculation(Y/N)? ";
	cin >> calculation;
	cout << endl;
	cout << endl;
	
	}
	return 0;

}