#include<bits/stdc++.h>
using namespace std;
class Complex
{
	int real, image;
	public:
		Complex(int r1=0, int i1=0) { real=r1; image=i1;}
		void in() { cout<<" ["<<real<<" + "<< image <<".i] "; }
		friend ostream &operator<<(ostream  &os, Complex b)
		{
			cout<<" ["<<b.real<<" "; if(b.image>=0) cout<<"+"; cout<<" "<<b.image <<".i] ";
			return os;
		}
		Complex operator+(Complex b){
			Complex t;
			t.real= real + b.real;
			t.image= image + b.image;
			
			return t;
		}
		//Complex operator-(Complex b){ }
		//int operator==(Complex b){ 	}
};  
int main()
{
	Complex a(3,7), b(4,-2),c;
	c=a+b;
	cout<<"\n Tong hai so phuc "<<a<<" + " <<b<<" = "<<c;
}
	
