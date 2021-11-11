#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    string a = "56789";
    sort(a.begin(), a.end(), greater<int>());
    //sort(a.begin(),a.end());
    //Can Go For Different Sorring Techniques
    //But They can Give Error in Some large Values (more than 2^31)
    cout << a;
    return 0;
}