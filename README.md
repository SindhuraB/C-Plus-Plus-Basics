# Beginner-Level-C-plus-plus-Programs
A collection of programs written for a beginner level C++ college class

Programs are further explained in their respective files.
* [Sum of a Series Program](#sum-of-series-program)
* [Magic Square Program](#magic-square-program)
* [Insertion Sort](#insertion-sort)
* [Employee Class](#employee-class)
* [Bank Class](#bank-class)
* [Recursive Function](#recursive-function)

## Sum of Series Program
Calculates the sum of a series using the formula 1/N+ 2/(N-1) + ... N/1, where N is user's input.

#### To Use
* sumofseries.cpp

#### Concepts Illustrated
* Validates input to check if user entered input is an integer
* Accounts for white space, punctuation and alphabetical characters

## Magic Square Program
Creates a square that is divided into smaller squares, each containing a number, such that the figures in each vertical, horizontal, and diagonal row add up to the same value.

#### To Use
* magicsquare.cpp

#### Concepts Illustrated
* 2D Dynamic Arrays

## Insertion Sort
This program will sort numbers from a given file in ascending order by using linear insertion sort. The elements of the array holding the sorted numbers will be shifted around every time a new number needs to be added to the array.
This is a terribly ineffective sorting method, but was written to illustrate a few important learning concepts.

#### To Use
* insertionsort.cpp

#### Concepts Illustrated
* File I/O (General Use and validation of file name)
* Array elements are shifted one place
* Sorting (Ascending order) is done.

## Employee Class
Simple program to track basic information of employees using classes

#### To Use
* employeeclass.cpp
* employee.cpp
* employee.h

#### Concepts Illustrated
* Classes
* Dynamically Allocated Arrays
* File I/O (Same file is initialized to be read from and to)
* Bubble sort
* A certain element in the dynamic array (the acct number of an employee) is found and all other elements corresponding to that employee are displayed

## Bank Class
Program that will make bank accounts of two types: savings and checkings. Accounts will be initialized with account number, name, balance and interest rate as required. User will be allowed to deposit money in, and withdraw money from any accounts. All account information will be displayed as requested.Similar to [Employee Class](#employee-class).

#### To Use
* bankclass.cpp
* bank.cpp
* bank.h

#### Concepts Illustrated
* Multiple constructors for a class
* Functions within a class call and use other functions of the same class
* Derived classes: One for savings accounts and one for checkings
* All instances made will be displayed along with the type of derived class used (C is displayed for checkings etc)
* Basic input validation while creating an object of bank class 


## Recursive Function
Basic program which determines whether the user-entered string is a palindrome. 

#### To Use
* recursivefunction.cpp

#### Concepts Illustrated
* Recursive functions

