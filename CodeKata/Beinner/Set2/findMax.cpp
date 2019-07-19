#include <iostream>
using namespace std;

int findMax(int numbers[], int arrLen);

int main()
{
    int N;
    cin >> N;
    int numbers[N];
    for (int i = 0; i < N; i++)
    {
        cin >> numbers[i];
    }

    std::cout << findMax(numbers, N);
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

