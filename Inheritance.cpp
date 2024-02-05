#include<iostream>
using namespace std;
//single level inheritance
class A
{
	public:
	int a;

		void abc(int x)
		{
			a=x;		 
		}

		void disp1()
		{
			cout<<"Value of A: "<<a<<endl;
		}
};

class B: public A
{
	int b,p;
	
	public:
		void xyz(int x,int y)
		{
			abc(x);
			b=y;
		}
		
		void disp2()
		{
			disp1();
			cout<<"Value of B: "<<b<<endl;
		}
		
		void calculate()
		{
			p=a*b;
			cout<<"Product of "<<a<<" * "<<b<<" = "<<p<<endl;
		}
		
};

int main()
{
	B obj;
	obj.xyz(12,5);
	obj.calculate();
	
	return 0;
}
