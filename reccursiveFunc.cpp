// Assignment 1 Part B.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//
#include "conio.h"
#include "iomanip"
#include "string"
#include<iostream>
using namespace std;

const int arraySize = 10;
int whatIsThis(int[], int); // prototype

int main()
{
	int a[arraySize] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int result = whatIsThis(a, arraySize);
	cout << "Result is " << result;

	_getch();
	return 0;
}
// What does this function do?
int whatIsThis(int b[], int size) {
	if (size == 1) { // base case
	return b[0];
	}
	else { // recursive step
	return b[size - 1] + whatIsThis(b, size - 1);
	}
}
