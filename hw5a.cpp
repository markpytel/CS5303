
//

// Mark Pytel

// CS5303 homework #5a

//

/*

I understand that using, receiving or giving unauthorized assistance in

writing this assignment is in violation of academic regulations and is subject to academic discipline, including a grade of 0 for this assignment with no chance of a making up the assignment, forfeiture of credit for the course, probation and dismissal from NYU.

By submitting this work I am certifying that I did not cheat!

*/

#include <iostream>

using namespace std;

double compute_miles_per_gallon(double miles_travelled, double gallons_used);
// This function computes the miles travelled per gallon of gas used.
// It takes input from main and determines the miles per gallon. This result
// is then returned.

double compute_cost_of_trip(double gallons_used, double price_per_gallon);
// This function computes the cost of trip based on the number of gallons 
// of gas used and the price per gallon. It takes input from main and calculates
// the cost of trip. It also returns the gas cost of the trip so that this number
// can be used by the compute_gas_cost_per_student function to determine how much
// each student should contribute.

double compute_gas_cost_per_student(double cost_of_trip, double number_of_students);
// This function will compute how much each student should contribute to the
// fund to cover gas costs for the trip. It takes the total gas cost from the
// compute_cost_of_trip function as well as the number of students going
// and divides the cost among the total number of students. This result is then
// returned.


int main()

{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	int number_of_students_main;
	double miles_travelled_main;
	double gallons_used_main;
	double price_per_gallon_main;
	double miles_per_gallon_main;
	double cost_of_trip_main;
	double gas_cost_per_student_main;
	char continue_program = 'Y';
	
	while (continue_program == 'Y' || continue_program == 'y')
	
	{
	
	cout << "How many students went on the trip? ";
	cin >> number_of_students_main;
	cout << "\n";
	
	cout << "How many miles did they travel? ";
	cin >> miles_travelled_main;
	cout << "\n";
	
	cout << "How many gallons did they use? ";
	cin >> gallons_used_main;
	cout << "\n";
	
	cout << "What was the price per gallon? ";
	cin >> price_per_gallon_main;
	cout << "\n";
	
	miles_per_gallon_main = compute_miles_per_gallon(miles_travelled_main, gallons_used_main);
	
	cout << "You travelled " << miles_travelled_main << " miles on " << gallons_used_main << " gallons of gasoline which was " << miles_per_gallon_main << " miles per gallon.";
	cout << "\n\n";
	
	cost_of_trip_main = compute_cost_of_trip(gallons_used_main, price_per_gallon_main);
	gas_cost_per_student_main = compute_gas_cost_per_student(cost_of_trip_main, number_of_students_main);
	
	cout << "The cost of the trip was $" << cost_of_trip_main << ", so each student pays $ " << gas_cost_per_student_main << ".";
	cout << "\n\n";
	
	cout << "Do you want to do this calculation again? (y/n) ";
	cin >> continue_program;
	cout << "\n";
	
	}
	
	
	return 0;

}

double compute_miles_per_gallon(double miles_travelled, double gallons_used)
{
	double miles_per_gallon;
	miles_per_gallon = miles_travelled / gallons_used;
	return miles_per_gallon;
}

double compute_cost_of_trip(double gallons_used, double price_per_gallon)
{
	double cost_of_trip;
	cost_of_trip = gallons_used * price_per_gallon;
	return cost_of_trip;
}

double compute_gas_cost_per_student(double cost_of_trip, double number_of_students)
{
	double gas_cost_per_student;
	gas_cost_per_student = cost_of_trip / number_of_students;
	return gas_cost_per_student;
}