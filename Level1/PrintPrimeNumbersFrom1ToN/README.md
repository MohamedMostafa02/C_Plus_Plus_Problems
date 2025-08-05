# Prime Number Finder - C++

This is a simple C++ console application that reads a positive number from the user and prints all prime numbers from 1 up to that number.

---

## ✅ Features
- Reads a **positive integer** from the user.
- Checks if each number from **1 to N** is **prime or not**.
- Prints all **prime numbers** in that range.
- Uses **enumeration (enum)** to represent prime status.
- Includes **input validation** loop to ensure only positive numbers are accepted.

---

## 🧠 How It Works

### 1. `readpositivenumber(message)`
Prompts the user until they enter a **positive number**.

### 2. `checkprime(num)`
Returns `prime` or `notprime` based on:
- Skips if number is 1 (not prime).
- Checks divisibility from 2 to `num / 2`.
- If divisible → `notprime`, otherwise → `prime`.

### 3. `printprimenumbers(num)`
- Loops from 1 to the input number.
- Prints only numbers where `checkprime(i)` returns `prime`.

---

## 🖥 Example Output
```
Please Enter A Positive Number:
10
Prime Numbers From 1 To 10 are: 
2
3
5
7
```

---

## ▶️ How to Compile and Run

### Compile:
```bash
g++ -o PrimeFinder main.cpp
```

### Run:
```bash
./PrimeFinder
```

> Replace `main.cpp` with your file name if different.

---

## 📦 Requirements
- C++ Compiler (e.g., `g++`)
- Works on Windows, Linux, or macOS terminal

---

## 👤 Author
Mohamed Mostafa  
💬 Email: mo@gmail.com  
🎯 Purpose: Educational / Learning basic C++ logic and control flow
