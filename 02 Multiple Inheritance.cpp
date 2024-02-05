#include <iostream>
using namespace std;
class A{
    public:
    int a;
    A()
    {
        cout<<"Value of a: "<<endl;
        cin>>a;
    }
};
class B{
    public:
    int b;
    B()
    {
      cout<<"Value of b: "<<endl;
      cin>>b;
    }
   
};
class C: public A,public B
{
    public:
    int s;
   C(): A(),B()
   {
    s=a+b;
    cout<<"Sum is "<<s<<endl;
   }

};
int main()
{
  C ob;
  return 0;

}