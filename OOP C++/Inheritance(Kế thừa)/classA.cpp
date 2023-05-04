#include<bits/stdc++.h>
using namespace std;
class A{
	private:
		int a;
	public:
		A(int a1=0) {a= a1;}
		void in()
		{
			cout<<"a="<<a;
		}
};
class B:A
{
	private:
		int b;
		public:
			B(int a1=15, int b1=9)
			{
				b=b1;
			}
			void in() 
			{
				cout << "b=" <<b; A::in();
			}
};
int main()
{
	A a(5); 
	cout<<"\n In doi tuong a: "; a.in();
	B b; 
	cout<<"\n In doi tuong b : "; b.in();
}