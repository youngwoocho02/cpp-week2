#include <iostream>

using namespace std;

int CountStrike(string answer, string guess);
int CountBall(string answer, string guess);
string GetRandomStrnig(int length);

int main()
{
    string answer = GetRandomStrnig(3);
    cout << "Answer is: " << answer << endl;

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
