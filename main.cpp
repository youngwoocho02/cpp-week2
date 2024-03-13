#include <iostream>

using namespace std;

int CountStrike(string answer, string guess);
int CountBall(string answer, string guess);

int main()
{
    cout << "Enter a answer: ";
    string answer;
    cin >> answer;

    while (true)
    {
        cout << "Enter a guess: ";
        string guess;

        cin >> guess;

        if (guess == answer)
        {
            cout << "You Win!" << endl;
            break;
        }

        cout << "Strikes: " << CountStrike(answer, guess) << ", Balls: " << CountBall(answer, guess) << endl;
    }
}
