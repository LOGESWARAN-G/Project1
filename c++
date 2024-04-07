#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime> // For time()

using namespace std;

int main() {
    srand(time(0)); // Seed the random number generator with current time

    int randomNumber = rand() % 100 + 1; // Generate a random number between 1 and 100
    int userGuess;

    cout << "Guess a number between 1 and 100: ";
    cin >> userGuess;

    while (userGuess != randomNumber) {
        if (userGuess < randomNumber) {
            cout << "Too low! Guess again: ";
        } else {
            cout << "Too high! Guess again: ";
        }
        cin >> userGuess;
    }

    cout << "Congratulations! You guessed the correct number: " << randomNumber << endl;

    return 0;
}
