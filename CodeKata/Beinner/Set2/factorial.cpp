//This program can calculate factorial in both standard and recursion way

#include <iostream>

using namespace std;
int factorial(int N);
void recFactorial(int N);
int fact = 1;
int main()
{
    int N;
    cin >> N;

    recFactorial(N);
    cout << fact;
}
//Standard method
int factorial(int N)
{
    int fact = 1;
    if (N > 1)
    {
        fact *= N;
        N--;
    }
    return fact;
}

//Recursive method
void recFactorial(int N)
{
    if (N >= 1)
    {
        recFactorial(--N);

        fact *= N + 1;
    }
}
