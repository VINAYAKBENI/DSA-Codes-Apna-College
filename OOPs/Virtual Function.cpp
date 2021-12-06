#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Ploymorphism

// Function Overloading
class a
{
public:
    void fun()
    {
        cout << "No argumnet" << endl;
    }
    void fun(int n)
    {
        cout << "Int argumnet" << endl;
    }
    void fun(bool a)
    {
        cout << "Bool argumnet" << endl;
    }
};

// Operator Overloading
class Complex
{
    int real, img;

public:
    Complex() {}
    Complex(int r, int i)
    {
        real = r;
        img = i;
    }
    Complex operator+(Complex const &a)
    {
        Complex res;
        res.img = img + a.img;
        res.real = real + a.real;
        return res;
    }
    void print()
    {
        cout << real << " + i " << img << endl;
    }
};

// Virtual Function
class base
{
public:
    // Virtual function
    virtual void print()
    {
        cout << "base" << endl;
    }
};
class derived : public base
{
public:
    void print()
    {
        cout << "derived" << endl;
    }
};

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    // Function Overloading
    a obj;
    obj.fun();
    obj.fun(2);
    obj.fun(false);

    // Operator Overloading
    Complex c1(12, 7), c2(6, 7);
    Complex c3 = c1 + c2;
    c3.print();

    // Virtual Function
    base *a;
    derived d;
    a = &d;
    a->print();

    return 0;
}