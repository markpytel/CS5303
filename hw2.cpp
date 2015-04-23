
//

// Mark Pytel

// CS5303 homework #2

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

	float connect_charge = 12.93;
	float water_cost_pergal = .00275;
	float gal_per_cubfoot = 7.5;
	
	float prev_meter_reading_cf;
	float current_meter_reading_cf;
	
	float water_used_cf;	
	float water_used_gal;	
	
	float cost_of_water_alone;
	float total_cost_of_water ;
	
	cout << "Please enter the previous meter reading in cubic feet: " << endl;
	cin >> prev_meter_reading_cf;
	
	
	cout << "Please enter the current meter reading in cubic feet: " << endl; 
	cin >> current_meter_reading_cf;
	
	
	water_used_cf = current_meter_reading_cf - prev_meter_reading_cf;
	water_used_gal = water_used_cf * gal_per_cubfoot;
	
	cost_of_water_alone = water_cost_pergal * water_used_gal;
	total_cost_of_water = cost_of_water_alone + connect_charge;
	
	cout << "You used a total of: " << water_used_gal << " gallons of water." << endl;
	cout << "Your pending bill is: $" << total_cost_of_water << endl;	

	return 0;

}