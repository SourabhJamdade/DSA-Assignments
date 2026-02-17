#include <iostream>
using namespace std;

int main()
{
    string A;
    char ch1, ch2;
    cin >> A;
    cin >> ch1 >> ch2;

    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] == ch1)
        {
            A[i] = ch2;
        }
    }
    cout << A;
}