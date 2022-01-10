#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// SubArray Of Size K And Sum Of Nos Divisible By 3
void Subarrray_Nos_Divisible_by_3(vector<int> arr, int k)
{
    pair<int, int> ans;
    int sum = 0;

    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }

    bool found = false;
    if (sum % 3 == 0)
    {
        ans = make_pair(0, k - 1);
        found = true;
    }

    for (int j = k; j < arr.size(); j++)
    {
        if (found)
        {
            break;
        }

        sum = sum + arr[j] - arr[j - k];

        if (sum % 3 == 0)
        {
            ans = make_pair(j - k + 1, j);
            found = true;
        }
    }

    if (!found)
    {
        ans = make_pair(-1, 0);
    }
    if (ans.first == -1)
    {
        cout << "No Subarray of size " << k << " exists" << endl;
    }
    else
    {
        for (int i = ans.first; i <= ans.second; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    vector<int> arr = {84, 23, 45, 12, 56, 82};
    Subarrray_Nos_Divisible_by_3(arr, 3);

    Subarrray_Nos_Divisible_by_3(arr, 6);

    return 0;
}