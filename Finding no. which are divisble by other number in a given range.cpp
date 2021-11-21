#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

//Finding the Numbers which are divisible by given two number
void divisible(int n, int a, int b)
{
    int n1 = n / a;
    int n2 = n / b;
    int c = n / (a * b);
    cout << n1 + n2 - c;
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    int a, b, n;
    cin >> n >> a >> b;
    divisible(n, a, b);
    return 0;
}