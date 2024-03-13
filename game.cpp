#include <iostream>

using namespace std;

int CountStrike(string answer, string guess)
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
int CountBall(string answer, string guess)
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