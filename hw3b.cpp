
//

// Mark Pytel

// CS5303 homework #3b

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
	cout << "MONTH		BALANCE		PAYMENT		INTEREST	SHORTAGE" << endl;
		
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	int month = 0;
	float goal = 5000.00;
	float monthly_deposit = 100.00;
	float monthly_interest_rate = 0.001;
	float balance = 0.00;
	float shortage = goal - balance;
	float interest_paid = 0.00;
	float total_interest_paid = 0.00;
	float final_deposit = 0.00;
	
	while (balance < goal)
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
	cout << "Total interest earned: " << total_interest_paid << endl;

	return 0;

}