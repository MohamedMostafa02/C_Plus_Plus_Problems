#include <iostream>
#include <string>
using namespace std;

// Function to repeatedly prompt the user to enter a positive number
int readpositivenumber(string message)
{
    int num;
    do
    {
        // Display the input message to the user
        cout << message << endl;
        // Read the user's input
        cin >> num;
        // Repeat if the input number is not positive (<= 0)
    } while (num <= 0);
    // Return the valid positive number
    return num;
}

// Function to check if a number is a perfect number
bool isperfectnumber(int num)
{
    int sum = 0;
    // Loop through all numbers less than 'num'
    for (int i = 1; i < num; i++)
    {
        // If 'i' is a divisor of 'num', add it to the sum
        if (num % i == 0)
            sum += i;
    }
    // A perfect number equals the sum of its proper divisors
    return num == sum;
}

// Function to print the result if the number is perfect or not
void printresult(int num)
{
    if (isperfectnumber(num))
        cout << "\n" << num << " is a perfect number\n";
    else
        cout << "\n" << num << " is not a perfect number\n";
}

int main()
{
    // Call readpositivenumber to get a valid positive number from the user
    // Then pass it to printresult to display whether it is perfect or not
    printresult(readpositivenumber("Please Enter A Positive Number: \n "));
    return 0;
}
