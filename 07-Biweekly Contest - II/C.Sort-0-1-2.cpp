#include <iostream>
using namespace std;

int main()
{
    int n;
    int zero = 0, one = 0, two = 0;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zero++;
        }
        else if (arr[i] == 1)
        {
            one++;
        }
        else if (arr[i] == 2)
        {
            two++;
        }
    }

    for (int i = 1; i <= two; i++)
    {

        cout << "2 ";
    }
    for (int i = 1; i <= one; i++)
    {

        cout << "1 ";
    }
    for (int i = 1; i <= zero; i++)
    {

        cout << "0 ";
    }
}