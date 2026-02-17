#include <iostream>
using namespace std;

int main()
{
    string A, result;
    cin >> A;

    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] >= 'A' && A[i] <= 'Z')
            result += (A[i] + 32);
        else
            result += (A[i] - 32);
    }
    cout << result;
}