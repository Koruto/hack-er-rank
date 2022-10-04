#include <iostream>
#include <cstring>
using namespace std;

#include "solution.h"
char highestOccurringChar(char input[])
{
    // Write your code here
    int f[256] = {0};
    for (int i = 0; input[i] != '\0'; i++)
    {
        ++f[input[i]];
    }
    char ans = input[0];
    int count = f[input[0]];
    for (int i = 1; input[i] != '\0'; i++)
    {
        if (f[input[i]] > count)
        {
            ans = input[i];
            count = f[input[i]];
        }
    }
    return ans;
}
int main()
{
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << highestOccurringChar(str);
}