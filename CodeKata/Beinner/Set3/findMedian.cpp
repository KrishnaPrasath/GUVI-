#include <iostream>

using namespace std;

void findMedian(int sortedArray[], int N);
int main()
{
    int N;

    cin >> N;

    int ip[N];
    for (int i = 0; i < N; i++)
    {
        cin >> ip[i];
    }

    findMedian(ip, N);
}

void findMedian(int sortedArray[], int N)
{

    int size = N;
    int median;
    if ((size % 2) != 0)
    {
        median = sortedArray[(size / 2)];
    }
    else
    {
        median = (sortedArray[(size / 2) - 1] + sortedArray[size / 2]) / 2;
    }
    cout << median;
}
