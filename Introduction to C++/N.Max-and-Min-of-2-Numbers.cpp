#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;
    cout << "Min = " << (A < B ? A : B) << endl;
    cout << "Max = " << (A > B ? A : B) << endl;
}