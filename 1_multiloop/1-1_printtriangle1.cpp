﻿/*
[Problem]
Write a program that prints n-layer triangles. See the examples of Input and Output.

[Input]
The integer n is given in the first line. (0≤n≤100)

[Output]
As shown in the following example,'*' is output in a triangular shape.

[Example input]
3

[Example output]
*
**
***

[Example input]
6

[Example output]
*
**
***
****
*****
******
*/

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i+1; j++) {
			cout << "*";
		}
		cout << "\n";
	}
}
