#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    cout <<"WELCOME TO THE NUMBER GUESSING GAME!" << endl;
    cout <<"Guess the correct number from 1 to 100 & try your luck!" << endl;

    int secret_number = rand()%100 + 1;
    int guess;
    cout <<"Enter your number:";
    cin >> guess;
    while(guess!=secret_number) {
        if(guess < secret_number) {
            cout <<"Your guess is smaller than the secret number" << endl;

        }
        else if(guess > secret_number) {
            cout <<"Your guess is greater than the secret number" << endl;
        }

        cout <<"Enter your number:";
        cin >>guess;
    }

cout <<"You Won!" << endl;
return 0;

}