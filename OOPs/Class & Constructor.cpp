#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;
// Class
class student
{
public:
    string name;
    int age;
    bool gender;
    // Constructors

    // Default Constructor
    student() {}
    // Parameterised Constructor
    student(string a, int b, bool c)
    {
        name = a;
        age = b;
        gender = c;
    }
    // Copy Constructor
    student(student &a)
    {
        name = a.name;
        age = a.age;
        gender = a.gender;
    }
    // function in class
    void print_info()
    {
        cout << "Name = ";
        cout << name << endl;
        cout << "age = ";
        cout << age << endl;
        cout << "gender = ";
        cout << gender << endl;
    }
};
int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    student arr[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Name = ";
        cin >> arr[i].name;
        cout << "age = ";
        cin >> arr[i].age;
        cout << "gender = ";
        cin >> arr[i].gender;
    }

    for (int i = 0; i < 3; i++)
    {
        arr[i].print_info();
    }

    return 0;
}