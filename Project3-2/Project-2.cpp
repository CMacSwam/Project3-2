/*
* File: P3-2
* Author: Chase McCluskey
*Date: 9/12/2024

Description: Finding a qoute for a customer on rails and posts they need
*
*/

#include <iostream>
#include <string>

using namespace std;
int main() {
	int fence_length;
	int numposts;
	int fence_pieces;
	const double FENCE_PRICE = 9.97;
	const double POST_PRICE = 10.98;
	double fencetotal;
	double posttotal;

	cout << "Enter the total length of required fence: ";
	cin >> fence_length;
	fence_pieces = (fence_length / 10) *3;
	numposts = (fence_pieces/3) + 1;
	posttotal = numposts* POST_PRICE;
	fencetotal = fence_pieces * FENCE_PRICE;
	double total = fencetotal + posttotal;
	cout << "The total price for the qoute is $" << total << endl;

}