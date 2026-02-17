#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int num;
    cin >> num;
    if (num >= 33 and num <= 126)
        cout << (char)num;
    else
        return 0;
}