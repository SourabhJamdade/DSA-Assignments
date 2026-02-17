#include <iostream>
using namespace std;

int main()
{
    string A;
    bool flag = true;
    cin >> A;
    int i = 0;
    int j = A.size() - 1;

    while (i < j)
    {
        if (A[i++] != A[j--])
        {
            flag = false;
            break;
        }
    }

    if (flag)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}