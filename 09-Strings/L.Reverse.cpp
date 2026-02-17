#include <iostream>
using namespace std;

int main()
{
    string A, result;
    cin >> A;

    for (int i = A.size() - 1; i >= 0; i--)
    {
        result += A[i];
    }
    cout << result;
}