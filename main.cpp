#include <iostream>

using namespace std;

int CountStrike(string answer, string guess);
int CountBall(string answer, string guess);
string GetRandomStrnig(int length);

int main()
{
    string answer = GetRandomStrnig(3);
    // cout << "Answer is: " << answer << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter a guess: ";
        string guess;

        cin >> guess;

        if (guess == answer)
        {
            cout << "You Win!" << endl;
            return 0;
        }

        cout << "Strikes: " << CountStrike(answer, guess) << ", Balls: " << CountBall(answer, guess) << endl;
    }

    cout << "You Lose!" << endl;
}
