
//

// Mark Pytel

// CS5303 homework #10

//

/*

I understand that using, receiving or giving unauthorized assistance in

writing this assignment is in violation of academic regulations and is subject to academic discipline, including a grade of 0 for this assignment with no chance of a making up the assignment, forfeiture of credit for the course, probation and dismissal from NYU.

By submitting this work I am certifying that I did not cheat!

*/


#include <iostream>
using namespace std;


void COUNT_ELEMENTS(int a[], int size);
//This function cycles through the array and counts the number of occurrences of
//each value. It then prints the value and the number of times it showed. The value 
//is not printed if it has not been entered.

void PRINT_ARRAY(int a[], int size);
//This function prints the array that it is given.

void GET_DATA(int a[], int size, int&number_used);
//This function takes in the original input array, along with its maximum
//size and returns the number of elements in the array.


void MY_SORT(int a[], int number_used);
//Sorts the values in an array from smallest to largest.

void swap_values(int &v1, int &v2);
//Swaps the values of v1 and v2.

int index_of_smallest(const int a[], int start_index, int number_used);
//Find the index value of the smallest number in an array.



int main()
{
	
	cout << "This program sorts numbers from lowest to highest.\n";
	int sample_array[50], number_used;
	
	GET_DATA(sample_array, 50, number_used);
	
	cout << "\nThe original array is:\n";
	
	PRINT_ARRAY(sample_array, number_used);
	
	MY_SORT(sample_array, number_used);
	
	cout << "\nIn sorted order the numbers are:\n";
	
	PRINT_ARRAY(sample_array, number_used);
	
	COUNT_ELEMENTS(sample_array, number_used);
			
	return 0;

}

void PRINT_ARRAY(int a[], int number_used)
{
	for (int index = 0; index < number_used; index++)
	{
		cout << a[index] << " ";
		
		if (((index+1) % 10) == 0)
		{
			cout << "\n";			
		}
	}
	
	cout << "\n";
}

void COUNT_ELEMENTS(int a[], int number_used)
{
	int digits_seen[10] = {0,0,0,0,0,0,0,0,0,0};
		
	for (int index = 0; index < number_used; index++)
	{
		digits_seen[a[index]]++;
	}
	
	cout << "\nOUTPUT:\n\nN	Count\n\n";
	
	for (int i = 1; i < 10; i++)
	{
		if (digits_seen[i] != 0)
		{
		cout << i << "	" << digits_seen[i] << "\n\n";
		}
	}
	
	cout << "\n";
}


void GET_DATA(int a[], int size, int&number_used)
{
	cout << "Enter at most 50 positive integers in the range 1..9, enter 0 when you are done\n";
	
	int next, index = 0;
	cin >> next;
	while ((next > 0) && (index < size))
	{
		a[index] = next;
		index++;
		cin >> next;
	}
	number_used = index;
}


void MY_SORT(int a[], int number_used)
{
	int index_of_next_smallest;
	
	for (int index = 0; index < number_used-1; index++)
	{
		index_of_next_smallest = index_of_smallest(a, index, number_used);
		swap_values(a[index], a[index_of_next_smallest]);
	
	}
}

void swap_values(int& v1, int& v2)
{
	int temp;
	temp = v1;
	v1 = v2;
	v2 = temp;
}

int index_of_smallest(const int a[], int start_index, int number_used)
{
	int min = a[start_index],
	index_of_min = start_index;
	for (int index = start_index+1; index < number_used; index++)
	{
		if (a[index] < min)
		{
			min = a[index];
			index_of_min = index;
			
		}
	}
	return index_of_min;
}