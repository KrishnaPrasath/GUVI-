#include <iostream>

using namespace std;

void sortAndPrint(int n, int nArr[]);

int main()
{
    int sum[4] = {5, 8, 6, 4};
    sortAndPrint(4, sum);
}
//[ 7 5 2 9]
void sortAndPrint(int n, int nArr[])
{
    int tmp = 0;
    int count = n;
    for (int i = 0; i < count; i++)
    {
        for (int j = i; j < count; j++)
        {
            if (nArr[i] > nArr[j])
            {
                nArr[j] = nArr[i] + nArr[j];
                nArr[i] = nArr[j] - nArr[i];
                nArr[j] = nArr[j] - nArr[i];
            }
        }
    }
    for (int k = 0; k < n; k++)
    {
        cout << nArr[k]<<" ";
    }
}
