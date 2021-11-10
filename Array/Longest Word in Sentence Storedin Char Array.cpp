#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif
    int n;
    cin >> n;
    cin.ignore();
    char a[n + 1];
    cin.getline(a, n);
    cin.ignore();
    int maxlen = 0, c = 0;
    int si=0,maxsi=0;
    //Checking for Largest word in sentence stored in Char array
    for (int i = 0; i < n; i++)
    {
        if (a[i] != ' ' && a[i] != '\0')
        {
            c++;

        }
        else
        {
            if(c>maxlen){
                maxlen=c;
                maxsi=si;
            }
            si=i+1;
            c = 0;
        }
    }
    cout << "largest word length is " << maxlen;
    e
    for(int i=0;i<maxlen;i++){
        cout<<a[i+maxsi];
    }
    return 0;
}