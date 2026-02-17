#include <iostream>
using namespace std;

int main()
{
    long long N, F;
    cin >> N >> F;
    if (N % F == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}