#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;
//Printing Number Till N (print first)
int i = 1;
void Print_till_n(int n)
{
    if (i == n)
    {
        cout << n;
        return;
    }
    cout << i << " ";
    i++;
    Print_till_n(n);
}
//Printing Number Till N (call first)
void print_till_n_rec(int n)
{
    if (n == 1)
    {
        cout << n << " ";
        return;
    }
    print_till_n_rec(n - 1);
    cout << n << " ";
}

//Printing Number till 1 (Print First)
void Print_till_1(int n)
{
    if (n == 1)
    {
        cout << n << " ";
        return;
    }
    cout << n << " ";
    Print_till_1(n - 1);
}
//Printing Number till 1 (Call First)
int j=1;
void print_till_1_rec(int n)
{   
    
    if (j == n)
    {
        cout << j << " ";
        return;
    }
    j++;
    print_till_1_rec(n);
    cout << --j << " ";
    
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    int n;
    cin >> n;
    Print_till_n(n);
    e
    print_till_n_rec(n);
    e
    Print_till_1(n);
    e
    print_till_1_rec(n);
    return 0;
}