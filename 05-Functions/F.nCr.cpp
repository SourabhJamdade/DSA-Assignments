#include <bits/stdc++.h>
using namespace std;

long long getFact(long long num)
{
    long long fact = 1;
    for (long long i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    long long n, r, nfact, rfact, ans, t, t2;
    cin >> n >> r;
    if (n > 60 and n > 60)
        return 0;

    nfact = getFact(n);
    rfact = getFact(r);

    t = n - r;
    t2 = getFact(t);

    ans = nfact / (rfact * t2);
    cout << ans;
}
