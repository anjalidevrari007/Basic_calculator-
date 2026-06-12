#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int number, guess, attempts = 0;

    srand(time(0));
    number = rand() % 100 + 1; // Random number between 1 and 100

    cout << "===== NUMBER GUESSING GAME =====" << endl;
    cout << "I have chosen a number between 1 and 100." << endl;
    cout << "Try to guess it!" << endl;

    do
    {
        cout << "\nEnter your guess: ";
        cin >> guess;

        attempts++;

        if (guess > number)
        {
            cout << "Too High!" << endl;
        }
        else if (guess < number)
        {
            cout << "Too Low!" << endl;
        }
        else
        {
            cout << "\nCongratulations! You guessed the number." << endl;
            cout << "Number was: " << number << endl;
            cout << "Attempts: " << attempts << endl;
        }

    } while (guess != number);

    return 0;
}
