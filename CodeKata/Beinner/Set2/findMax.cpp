#include <iostream>
using namespace std;

int findMax(int numbers[], int arrLen);

int main()
{
    int numbers[] = {1, 2, 8, 4, 5};
    int N = 5;
    cout << findMax(numbers, N);
}

int findMax(int numbers[], int arrLen)
{
    int temp = numbers[0];
    for (int i = 0; i < arrLen; i++)
    {
        if (numbers[i] > temp)
        {
            temp = numbers[i];
        }
    }
    return temp;
}
