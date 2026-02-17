#include <iostream>
using namespace std;

int main()
{
    string A, result;
    getline(cin, A);

    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] != ' ')
        {
            result += A[i];
        }
    }
    cout << result;
}