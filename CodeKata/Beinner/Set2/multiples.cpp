#include <iostream>
using namespace std;
void multiples(int N);
int main()
{
    multiples(5);
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
