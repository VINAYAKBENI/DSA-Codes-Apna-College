#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Single Inheritance
class a
{
public:
    void print()
    {
        cout << "base class" << endl;
    }
};

class b : public a
{
};

// Multiple Inheritance
class A
{
public:
    void print_a()
    {
        cout << "base class a" << endl;
    }
};

class B
{
public:
    void print_b()
    {
        cout << "base class b" << endl;
    }
};
class C : public A, public B
{
};

// Multi-level Inheritance
class A1
{
public:
    void print_a1()
    {
        cout << "base class a1" << endl;
    }
};

class B1 : public A1
{
public:
    void print_b1()
    {
        cout << "base class b1" << endl;
    }
};
class C1 : public B1
{
};

// Hierarchical Inheritance
class A2
{
public:
    void print_a2()
    {
        cout << "base class a2" << endl;
    }
};

class B2 : public A2
{
public:
    void print_b2()
    {
        cout << "base class b2" << endl;
    }
};
class C2 : public A2
{
};

// Hybrid Inheritance
class A3
{
public:
    void print_a3()
    {
        cout << "base class a3" << endl;
    }
};

class B3 : public A3
{
public:
    void print_b3()
    {
        cout << "base class b3" << endl;
    }
};
class C3
{
public:
    void print_c3()
    {
        cout << "base class c3" << endl;
    }
};
class D3 : public B3, public C3
{
};

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    // Single inheritance object
    b obj;
    obj.print();

    // Multiple inheritance object
    C obj1;
    obj1.print_a();
    obj1.print_b();

    // Multi-level inheritance object
    C1 obj2;
    obj2.print_a1();
    obj2.print_b1();
    // Hierarchical inheritance object
    C2 obj3;
    obj3.print_a2();
    // Hybrid Inheritance
    D3 obj4;
    obj4.print_a3();
    obj4.print_b3();
    obj4.print_c3();

    return 0;
}