#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    int mx = A;
    int min = A;

    if (B < min)
        min = B;
    if (C < min)
        min = C;

    if (B > mx)
        mx = B;
    if (C > mx)
        mx = C;

    cout << "Min = " << min << endl;
    cout << "Max = " << mx << endl;
}