#include <iostream>
#include <cstring>
using namespace std;

#include "solution.h"
void removeAllOccurrencesOfChar(char input[], char c)
{
    // Write your code here
    int trim = 0;
    int i = 0;
    int len = strlen(input);
    while (i < len)
    {
        if (input[i] != c)
        {
            swap(input[i], input[trim]);
            i++;
            trim++;
        }
        else
        {
            input[i] = '\0';
            i++;
        }
    }
}

int main()
{
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    char c;
    cin >> c;
    removeAllOccurrencesOfChar(str, c);
    cout << str;
}