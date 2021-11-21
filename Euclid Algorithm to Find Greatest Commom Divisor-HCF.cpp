#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

//Euclid Algorithm to Find Greatest Commom Divisor/HCF
void hcf(int a, int b)
{
    if (a > b)
    {
        while (a % b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        cout << b;
    }
    else
    {
        swap(a, b);
        while (a % b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        cout << b;
    }
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    int a, b;
    cin >> a >> b;
    hcf(a, b);
    return 0;
}