/*
Multiples of 3 and 5
Problem 1
Link
https://projecteuler.net/problem=1

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.

*/

#include<iostream>

using namespace std;

int main()
{
	int max = 1000;
	max--;
	int n3 = max/3, n5 = max/5;
	int n15 = max/15;
	int s3 = ((2*3 + (n3-1)*3)*n3)/2;
	int s5 = ((2*5 + (n5-1)*5)*n5)/2;
	int s15 = ((2*15 + (n15-1)*15)*n15)/2;
	long sum = s3 + s5 - s15;
	cout<<sum;
	return 0;
}
