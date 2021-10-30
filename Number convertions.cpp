#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;
// Function To Convert Binary To Decimal No.
int binarytodecimal(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 10;
        ans += x * y;
        x *= 2;
        n /= 10;
    }
    return ans;
}
//Funation to Convert Decimal To Binary
int decimaltobinary(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 2;
        ans += x * y;
        x *= 10;
        n /= 2;
    }
    return ans;
}
// Function To Convert Octal To Decimal
int octaltodecimal(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 10;
        ans += x * y;
        x *= 8;
        n /= 10;
    }
    return ans;
}
//Function To Convert Decimal To Octal
int decimaltooctal(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 8;
        ans += x * y;
        x *= 10;
        n /= 8;
    }
    return ans;
}
//Function To Convert HexaDecimal To Decimal
int hexadecimaltodecimal(string n)
{
    int ans=0;
    int x=1;
    for(int i=n.size()-1;i>=0;i--){
        if(n[i]>='0' && n[i]<='9'){
            ans+=x*(n[i]-'0');
        }
        else if(n[i]>='a' && n[i]<='f'){
            ans+=x*(n[i]-'a'+10);
        }
        x*=16;
    }
    return ans;
}
//Function To Convert Decimal To Hexadecimal

string decimaltohexadecimal(int n){
    string ans;
    while(n>0){
        int a=n%16;
        if(a>=0 && a<=9){
            ans+=to_string(a);
        }
        else{
            if(a==10){
            ans+='a';
            }
            else if(a==11){
                ans+='b';
            }
            else if(a==12){
                ans+='c';
            }
            else if(a==13){
                ans+='d';
            }
            else if(a==14){
                ans+='e';
            }
            else{
                ans+='f';
            }
        }
        n/=16;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    int n;
    cin >> n;
    /*
    cout<<binarytodecimal(n);
    cout<<decimaltobinary(n);
    cout<<octaltodecimal(n);
    cout<<decimaltooctal(n);
    cout<<hexadecimaltodecimal(n);
   */
  cout<<decimaltohexadecimal(n);
    return 0;
}