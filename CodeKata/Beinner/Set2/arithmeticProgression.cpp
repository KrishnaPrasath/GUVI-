#include <iostream>
using namespace std;
int ap(int N, int A, int D);
int main()
{
    int N, A, D;
    cin >> N >> A >> D;
    cout << ap(N, A, D);
}

int ap(int N, int A, int D)
{
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += A + (i * D);
    }
    return sum;
}
