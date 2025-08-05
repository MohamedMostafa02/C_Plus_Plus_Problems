#include <iostream>
#include <string>
using namespace std;

// Function to print the header of the multiplication table
void printtableheader()
{
    // Print table title
    cout << "\n\n\t\t\tMultipliaction Table From 1 to 10\n\n";

    // Print top row labels (1 to 10)
    cout << "\t";
    for (int i = 1; i <= 10; i++)
    {
        cout << i << "\t";
    }

    // Print a line separator
    cout << "\n___________________________________________________________________________________\n";
}

// Function to return the correct column separator based on the row number
string columnseperator(int i)
{
    // Adds spacing so that numbers align nicely regardless of digit count
    if (i < 10)
        return "   |";  // extra space for single digit numbers
    else
        return "  |";   // less space for double digit numbers
}

// Function to print the full multiplication table from 1 to 10
void printmultiplicationtable()
{
    printtableheader(); // Print header first

    // Outer loop: iterates through rows (1 to 10)
    for (int i = 1; i <= 10; i++)
    {
        // Print row label + separator
        cout << i << columnseperator(i) << "\t";

        // Inner loop: iterate through columns (1 to 10)
        for (int j = 1; j <= 10; j++)
        {
            // Print product of i * j
            cout << j * i << "\t";
        }

        // Move to next line after printing one row
        cout << endl;
    }
}

// Main function: program entry point
int main()
{
    // Call function to print the multiplication table
    printmultiplicationtable();

    // Return 0 to indicate successful execution
    return 0;
}
