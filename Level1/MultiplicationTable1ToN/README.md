# Multiplication Table Printer - C++ Console Application

This is a simple C++ console application that prints a well-formatted multiplication table from 1 to 10. It demonstrates the use of nested loops, string formatting, and modular function design.

## ✅ Features
- Prints a multiplication table from 1 to 10
- Uses clear headers and separators for readability
- Aligns numbers correctly using spacing logic
- Organized code using separate functions

## 🧠 How It Works
- `printtableheader()` prints the table title and the top row (numbers 1 to 10)
- `columnseperator(int i)` adjusts the spacing for rows with single/double-digit numbers
- `printmultiplicationtable()` generates the full multiplication table using nested loops

## 🖥 Example Output
		Multipliaction Table From 1 to 10

	1	2	3	4	5	6	7	8	9	10
___________________________________________________________________________________
1   |	1	2	3	4	5	6	7	8	9	10
2   |	2	4	6	8	10	12	14	16	18	20
...
10  |	10	20	30	40	50	60	70	80	90	100

## ▶️ How to Compile and Run
Compile the program using any C++ compiler:

g++ -o multiplication_table main.cpp

Then run it:

./multiplication_table

## 📦 Requirements
- C++ compiler (e.g., g++, clang++, MSVC)
- Compatible with Windows, Linux, or macOS

## 👤 Author
Created as a basic example to demonstrate formatting and loop control in C++.

