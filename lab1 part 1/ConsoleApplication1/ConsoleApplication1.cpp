// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    // There is a logic error in this program.
    // Correct this error, test your changes, and commit the changes
    int guess = 0, solution = 15;
    char answer = 'Y';
    cout << "Would you like to play? ";
    cin >> answer;
    answer = toupper(answer);
    while (answer == 'Y' ) {
        cout << "Enter your guess between 0 & 50: ";
        cin >> guess;
        while (guess != solution) {// wasn't lopping the guess
            cout << "here" << endl;
            if (guess > solution) {
                cout << "sorry - your guess is too big\n";
            }
            else
                cout << "sorry - your guess is too low\n";

            cout << "Guess again? ";
            cin >> guess; // set to answer instead of guess
        }
        cout << "Correct" << endl;
        cout << "Would you like to play? again ";
        cin >> answer;
        answer = toupper(answer);
    }
    cout << "end of code" << endl;

}
