// cs201_Lab1_Part2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
int main() {
	//set up variables used
	string in1, in2, in3, in4;
	int x1, y1, x2, y2;
	float dist1, dist2;
	char choice;
	//get choice from user ‘e’ to enter values or
	//’g’ to generate values using random values
	cout << "How would you like to get the 4 values random (g) or enter values(e) ";
	cin >> choice;
	//get input if choice is ‘e’
	if (choice == 'e') { // addeds if to deterimine choices
		cout << "Please enter 4 values: ";
		cin >> in1 >> in2 >> in3 >> in4;
		for (unsigned int i = 0 ; i < in1.length(); i++) { // uses a for loop to iterate throught the length of the string and checks if each string is a digit if its not a digit it retunrns zero which ends the code
			if (isdigit(in1[i]) == 0){
				cout << "must be a number" << endl;
				exit(0);
			}
		
		}
		for (unsigned int i = 0; i < in2.length(); i++) {
			if (isdigit(in2[i]) == 0) {
				cout << "must be a number" << endl;
				exit(0);
			}

		}
		for (unsigned int i = 0; i < in3.length(); i++) {
			if (isdigit(in3[i]) == 0) {
				cout << "must be a number" << endl;
				exit(0);
			}

		}
		for (unsigned int i = 0; i < in4.length(); i++) {
			if (isdigit(in4[i]) == 0) {
				cout << "must be a number" << endl;
				exit(0);
			}

		}
		// convert string to int using stoi
		x1 = stoi(in1);	
		y1 = stoi(in2);
		x2 = stoi(in3);
		y2 = stoi(in4);
		if (x1 < -10 || x1 > 10 || x2 < -10 || x2 > 10 || y1 < -10 || y1 > 10 || y1 < -10 || y1 > 10) { // takes out number bigger than 10 and less than -10
			cout << "must be less than 10 or greater than -10" << endl;
			exit(0);
		}

	}
	//here we will verify input to make sure it is numeric
	//if so, make sure it between -10 and 10 inclusive
	//if not, send error message to the screen &
	//end program
	else if (choice == 'g') {
		srand(time(0));
		x1 = (rand() % 20) - 10;
		x2 = (rand() % 20) - 10;
		y1 = (rand() % 20) - 10;
		y2 = (rand() % 20) - 10;

	}
	
	cout << x1 << y1 << x2 << y2 << endl;
	
	//else if choice is ‘g’

	//generate 4 random numbers between -10 & 10
	// //endIf
	// //print both points
	cout << "point one is: (" << x1 << "," << y1 << ") point two is: (" << x2 << "," << y2 << ")" << endl;
//calculate dist1 & dist2
	dist1 = pow((pow(x1, 2.0) + pow(y1, 2.0)), (.5));
	dist2 = pow((pow(x2, 2.0) + pow(y2, 2.0)), (.5));
	cout << "distance to point one: " << dist1 << endl;
	cout << "distance to point two: " << dist2 << endl;

	if (dist1 > dist2) {// compares distances and states which is closer
		cout << "point two is closer to the orgin" << endl;
	}
	else if (dist1 == dist2) { 
		cout << "they are the same distance" << endl;
	}
	else {
		cout << "point one is closer to the orgin" << endl;
	}
//determine which is closer and print
}