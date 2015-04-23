
//

// Mark Pytel

// CS5303 homework #8

//

/*

I understand that using, receiving or giving unauthorized assistance in

writing this assignment is in violation of academic regulations and is subject to academic discipline, including a grade of 0 for this assignment with no chance of a making up the assignment, forfeiture of credit for the course, probation and dismissal from NYU.

By submitting this work I am certifying that I did not cheat!

*/

#include <iostream>
#include <fstream>

using namespace std;

int main()

{

	ifstream in_stream;

	char next_symbol;
	
	in_stream.open("data8.txt");
	
	if(in_stream.fail())
	{
		cout << "Error opening input file\n";
	}
	in_stream.get(next_symbol);
	
	while(!(in_stream.eof()))
	{
		
		char a = toupper(next_symbol);
		char b;
		
		if (a==' ' && b ==' ')
		{
			in_stream.get(next_symbol);			
		}
		else
		{
			cout << a;
			in_stream.get(next_symbol);
		}
		
		if (a==' ')
		{
			b = a;
		}
		else
		{	
			b = 'b';
		}
		
	}
	in_stream.close();
	

	return 0;

}