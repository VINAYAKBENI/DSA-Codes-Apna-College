#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Encapsulation
class A
{
public:
    int a;
    void funcA()
    {
        cout << "functin A";
    }

private:
    int b;
    void funcB()
    {
        cout << "function B";
    }

protected:
    int c;
    void funcC()
    {
        cout << "function C";
    }
};

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    A obj;
    obj.funcA();

    return 0;
}