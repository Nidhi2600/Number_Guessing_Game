
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    // Seed the random number generator
    srand(time(0));

    int target, guess, attempts;
    char playAgain;

    cout << "==============================\n";
    cout << "     NUMBER GUESSING GAME\n";
    cout << "==============================\n";

    do
    {
        // Generate random number between 1 and 100
        target = rand() % 100 + 1;
        attempts = 0;

        cout << "\nI have selected a number between 1 and 100.";
        cout << "\nTry to guess the number!\n";

        // Guessing loop
        do
        {
            cout << "\nEnter your guess: ";
            cin >> guess;

            attempts++;

            if (guess > target)
            {
                cout << "Too High! Try again.\n";
            }
            else if (guess < target)
            {
                cout << "Too Low! Try again.\n";
            }
            else
            {
                cout << "\nCongratulations! You guessed it!\n";
                cout << "The correct number was: " << target << endl;
                cout << "Total Attempts: " << attempts << endl;

                // Display score
                cout << "Your Score: " << 100 - (attempts - 1) * 10;
                cout << endl;
            }

        } while (guess != target);

        // Replay option
        cout << "\nDo you want to play again? (Y/N): ";
        cin >> playAgain;

    } while (playAgain == 'Y' || playAgain == 'y');

    cout << "\nThank you for playing!\n";
    cout << "Game Over!\n";

    return 0;
}
