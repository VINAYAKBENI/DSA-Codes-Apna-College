#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

//Tower of hanoi
void Tower_of_Hanoi(int n, char src, char helper, char dest)
{
    if (n == 0)
        return;
    Tower_of_Hanoi(n - 1, src, dest, helper);
    cout << "move from " << src << " to " << dest << endl;
    Tower_of_Hanoi(n - 1, helper, dest, src);
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    Tower_of_Hanoi(2, 'a', 'b', 'c');
    return 0;
}