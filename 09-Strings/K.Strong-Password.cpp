#include <iostream>
using namespace std;

int main()
{
    int d = 0, u = 0, l = 0, s = 0;
    string A, result;
    cin >> A;

    if (A.size() == 10)
    {
        for (int i = 0; i < A.size(); i++)
        {
            if (A[i] >= '0' && A[i] <= '9')
                d++;
            else if (A[i] >= 'A' && A[i] <= 'Z')
                u++;
            else if (A[i] >= 'a' && A[i] <= 'z')
                l++;
            else
                s++;
        }
        if (d >= 1 and u >= 1 and l >= 1 and s >= 1)
            cout << "Strong";
        else
            cout << "Weak";
    }
    else
        cout << "Weak";
}