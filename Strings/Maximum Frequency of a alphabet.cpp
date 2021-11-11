#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

//Alphabet Which Occur the most with Frequency
void max_string(string a)
{
    vector<int> vec(26, 0);
    for (int i = 0; i < a.size(); i++)
    {
        int b = a[i] - 'a';
        vec[b]++;
    }
    char ans = 'a';
    int max = 0;
    for (int i = 0; i < 26; i++)
    {
        if (vec[i] > max)
        {
            max = vec[i];
            ans = ans + i;
        }
    }
    cout << ans << " : " << max;
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    string a = "asdddddddddddafghajkla";
    max_string(a);
    return 0;
}