#include <iostream>
using namespace std;
void selectionsort(int input[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = input[i], minindex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (input[j] < min)
            {
                min = input[j];
                minindex = j;
            }
        }
        // swap
        int temp = input[i];
        input[i] = input[minindex];
        input[minindex] = temp;
    }
}
int main()
{
    int input[] = {3, 4, 5, 2, 1, 6, 456, 7, 89};
    selectionsort(input, 9);
    for (int i = 0; i < 9; i++)
    {
        cout << input[i] << " ";
    }
    cout << endl;
}
