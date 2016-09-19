#include <iostream>
using namespace std;

/*
Dynamic arrays are allocated while the porgram is running.
When declaring the array, we do NOT have to use a constant
integer to specify hte number of elements.

This means we don't have to know how big the array
needs to be at the time we are writing the program. We
could potentially figure out logically how big it needs to
be and then use that value to declare the dynamic array.
*/


int main()
{
	//declare variables
	int numElements; //used to sotre the size of the array
	int *myArray; //pointer
	int iSum = 0; //accumulate

	//prompt the user how many numbers they want to enter
	cout << "How many numbers do you want to store: ";
	cin >> numElements;

	//declare the dynamic array
	//"new" allocates memory and returns the address
	myArray = new int[numElements];

	//loop through the array and store user values
	for (int x = 0; x < numElements; x++)
	{	
		//prompt for value
		cout << "Enter value " << x + 1 << ": ";
		//store
		cin >> myArray[x];

	}//end loop

	//add up all the values and display total
	for (int x = 0; x < numElements; x++)
	{
		iSum = iSum + myArray[x];
	}
	
	cout << "The total is: " << iSum << endl << endl;

	//free up dynamic memory
	delete [] myArray;
	myArray = NULL;
	




	return 0;
}