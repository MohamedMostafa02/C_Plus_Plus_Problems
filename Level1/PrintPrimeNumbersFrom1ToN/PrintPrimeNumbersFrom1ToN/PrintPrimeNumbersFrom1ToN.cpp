#include <iostream>
#include <string>
using namespace std;

// Enum to represent whether a number is prime or not
enum enprimenotprime { prime = 1, notprime = 2 };

// Function to read a positive number from the user
int readpositivenumber(string message)
{
	int num;
	do
	{
		cout << message << endl;
		cin >> num;
	} while (num <= 0); // Keep asking until a positive number is entered
	return num;
}

// Function to check if a number is prime
enprimenotprime checkprime(int num)
{
	if (num == 1)
		return enprimenotprime::notprime; // 1 is not a prime number

	int m = round(num / 2); // Only need to check up to half of the number

	for (int i = 2; i <= m; i++) // Try all divisors from 2 to m
	{
		if (num % i == 0) // If the number is divisible by i, it's not prime
			return enprimenotprime::notprime;
	}
	return enprimenotprime::prime; // If no divisors found, it's prime
}

// Function to print all prime numbers from 1 to the given number
void printprimenumbers(int num)
{
	cout << "Prime Numbers From 1 To " << num << " are: \n";
	for (int i = 1; i <= num; i++)
	{
		if (checkprime(i) == enprimenotprime::prime) // If i is prime
			cout << i << endl;
	}
}

int main()
{
	// Call the function to print prime numbers after reading user input
	printprimenumbers(readpositivenumber("Please Enter A Positive Number: "));
	return 0;
}
