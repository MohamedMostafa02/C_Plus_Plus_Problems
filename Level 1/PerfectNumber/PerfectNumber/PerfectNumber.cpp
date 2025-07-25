
#include <iostream>
#include <string>
using namespace std;
int readpositivenumber(string message)
{
	int num;
	do
	{
		cout << message << endl;
		cin >> num;
	} while (num <= 0);
	return num;
}
bool isperfectnumber(int num)
{
	int sum = 0;
	for (int i = 1; i < num; i++)
	{
		if (num % i == 0)
			sum += i;

	}
	return num == sum;
}
void printresult(int num)
{
	if (isperfectnumber(num))
		cout << "\n" << num << " is a perfect number\n";
	else
		cout << "\n" << num << " is not a perfect number\n";

}
int main()
{

	printresult(readpositivenumber("Please Enter A Positive Number: \n "));
	return 0;
}
