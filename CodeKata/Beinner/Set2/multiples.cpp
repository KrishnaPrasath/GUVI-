#include <iostream>
using namespace std;
void multiples(int N);
int main()
{
    int N;
    cin >> N;
    multiples(N);
}

void multiples(int N)
{

    for (int i = 0; i < 5; i++)
    {
        int temp = 0;
        for (int j = 0; j <= i; j++)
        {
            temp += N;
        }
        cout << temp << " ";
    }
}
