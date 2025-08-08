# Perfect Number Checker - C++ Console Application

This C++ console program checks whether a given positive number is a **perfect number**. A perfect number is a number that is equal to the sum of its proper divisors (excluding itself).

## ✅ Features
- Prompts the user to enter a positive number, validating input to ensure positivity.
- Checks if the entered number is perfect by summing its divisors.
- Prints the result clearly indicating whether the number is perfect or not.
- Simple and easy to understand program for beginners.

## 🧠 How It Works
1. The function `readpositivenumber` repeatedly prompts the user until a valid positive integer is entered.
2. The function `isperfectnumber` calculates the sum of all proper divisors of the input number.
3. If the sum equals the original number, it is considered perfect.
4. The function `printresult` outputs the result based on the check.
5. The `main` function orchestrates the input and output by calling these functions.

## 🖥 Example Output
Please Enter A Positive Number: 
6

6 is a perfect number

## ▶️ How to Compile and Run
1. Save the code in a file named `PerfectNumberChecker.cpp`.
2. Use a C++ compiler like `g++`:
   g++ -o PerfectNumberChecker PerfectNumberChecker.cpp
3. Run the executable:
   ./PerfectNumberChecker
4. Follow the prompt to enter a positive number.

## 📦 Requirements
- C++ compiler (e.g., GCC, Clang, Visual C++).
- Basic command line interface or IDE to compile and run C++ programs.

## 👤 Author
Mohamed Mostafa – A simple example demonstrating input validation and perfect number checking in C++.
