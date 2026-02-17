#include <iostream>
using namespace std;

int main()
{
    string A;
    int count = 1;
    getline(cin, A);

    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] == ' ')
        {
            count++;
        }
    }
    cout << count;
}