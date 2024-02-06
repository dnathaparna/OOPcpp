#include<iostream>
using namespace std;

class A
{
public:
    int a;
    void abc(int x)
    {
        a=x;		 
    }
};

class B: public A
{
public:
    int b;
    void xyz(int x,int y)
    {
        abc(x);
        b=y;
    }
};

class C: public B
{
public:
    int c,s;
    void omg(int p,int q)
    {
        xyz(p,q);
        c=q;
    }
    void calculate()
    {
        s=a+b+c;
        cout<<"Sum is "<<s;
    }
};

int main()
{
    C ob;
    int a, b, c;
    ob.omg(8,9);
    cout<<"Enter first value: "<<endl;
    cin>>a;
    cout<<"Enter second value: "<<endl;
    cin>>b;
    cout<<"Enter third value: "<<endl;
    cin>>c;
    ob.a = a;
    ob.b = b;
    ob.c = c;
    ob.calculate();
    return 0;
}
