#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Function To Find No. Of Painters
int Find_Possible_Painters(int boards[], int n, int limit)
{
    int painters = 1, sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += boards[i];
        if (sum > limit)
        {
            painters++;
            sum = boards[i];
        }
    }
    return painters;
}

// Painters Partition Problem
int Painter_Partition(int boards[], int n, int m)
{
    int total_lenght = 0, k = 0;

    for (int i = 0; i < n; i++)
    {
        k = max(k, boards[i]);
        total_lenght += boards[i];
    }

    int start = k, end = total_lenght;

    while (start < end)
    {
        int mid = start + (end - start) / 2;
        int painter = Find_Possible_Painters(boards, n, mid);
        if (painter <= m)
        {
            end = mid;
        }
        else
        {
            start = mid + 1;
        }
    }
    return start;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    int arr[] = {10, 20, 30, 40};
    int n = 4, m = 2;

    cout << "The Minimum Time To Paint Boards : " << Painter_Partition(arr, n, m);

    return 0;
}