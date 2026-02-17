#include <iostream>
using namespace std;

int main()
{
    string A, result;
    char ch1;
    cin >> A;
    cin >> ch1;

    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] != ch1)
        {
            result += A[i];
        }
    }
    cout << result;
}