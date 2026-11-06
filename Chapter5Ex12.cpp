#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0)));

    int randomNumber = rand() % 100 + 1;
    int guess;

    cout << "I'm thinking of a number between 1 and 100. Can you guess what it is?" << endl;

    do
    {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess < randomNumber)
        {
            cout << "Too low. Try again." << endl;
        }
        else if (guess > randomNumber)
        {
            cout << "Too high. Try again." << endl;
        }
    } while (guess != randomNumber);

    cout << "Congratulations. You figured out my number." << endl;

    return 0;
}