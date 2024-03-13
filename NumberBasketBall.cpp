#include <iostream>

using namespace std;

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

static int CountStrike(string answer, string guess)
{
    int count = 0;
    for (int i = 0; i < answer.length(); i++)
    {
        if (answer[i] == guess[i])
        {
            count++;
        }
    }

    return count;
}

static int CountBall(string answer, string guess)
{
    int count = 0;

    for (int i = 0; i < answer.length(); i++)
    {
        for (int j = 0; j < guess.length(); j++)
        {
            if (i == j)
            {
                continue;
            }

            if (answer[i] == guess[j])
            {
                count++;
            }
        }
    }

    return count;
}