#include <iostream>
#include <ctime>

using namespace std;

string GetRandomStrnig(int length)
{
    srand(time(0));

    string str = "0123456789";
    string result = "";

    for (int i = 0; i < length; i++)
    {
        int index = rand() % str.length();
        result += str[index];
        str.erase(index, 1);
    }

    return result;
}