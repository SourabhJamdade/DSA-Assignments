#include <iostream>
using namespace std;

int main()
{
    int M;
    cin >> M;
    if (M > 90)
        cout << "Excellent" << endl;
    else if (M > 80)
        cout << "Good" << endl;
    else if (M > 70)
        cout << "Fair" << endl;
    else if (M > 60)
        cout << "Meets Expectations" << endl;
    else
        cout << "Below Par" << endl;
}