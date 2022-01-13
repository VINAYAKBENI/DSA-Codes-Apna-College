#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Heapify Function
void heapify(vector<int> &a, int n, int i)
{
    int maxindex = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && a[left] > a[maxindex])
    {
        maxindex = left;
    }
    if (right < n && a[right] > a[maxindex])
    {
        maxindex = right;
    }

    if (maxindex != i)
    {
        swap(a[i], a[maxindex]);
        heapify(a, n, maxindex);
    }
}

// Heap Sort Function
void heapsort(vector<int> &a)
{
    int n = a.size();

    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(a, n, i);
    }

    for (int i = n - 1; i > 0; i--)
    {
        swap(a[0], a[i]);
        heapify(a, i, 0);
    }
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    heapsort(a);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}