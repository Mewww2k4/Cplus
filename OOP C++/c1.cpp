#include <bits/stdc++.h>
using namespace std;
class TH
{
	private:
		vector <int> a;
	public:
    friend istream& operator>>(istream& is, TH& b);
	friend ostream& operator<<(ostream &os, TH b);
	
	TH operator+(TH b)
	{
		TH c;
		
		for (int i=0;i<a.size();++i)
		{	
			c.a.push_back(a[i]);
		}
		
		for (int i=0;i<b.a.size(); ++i)
		{	
			c.a.push_back(b.a[i]);
		}
		
		return c;
	}
	
	TH operator-(TH b)
	{
		TH c=*this;
		
		for (int i=0; i<b.a.size(); ++i)
		{
			for (int j=0; j<a.size(); ++j)
			{
				if (a[j]==b.a[i])
				{
					c.a.erase(c.a.begin() + j);
                    --j;
				}
			}
		}
		
		return c;
	}
		
		TH operator*(TH b)
		{
			TH c;
			
			for (int i=0; i<b.a.size(); ++i)
			{
				for (int j=0; j<a.size(); ++j)
				{
					if (a[j]==b.a[i])
					{
						c.a.push_back(a[j]);
					}
				}
			}
			
			return c;
		}
};

istream& operator>>(istream& is, TH& b)
{
	int n;
	do{
	cout<<"Nhap so luong phan tu: ";
	cin>>n;
	}while(n<=0);
	
	b.a.reserve(n);
	
	cout<<"Nhap phan tu: "<<endl;
	for(int i=0; i<n; ++i)
	{
		cout<<"Nhap phan tu thu "<<i<<":";
		int tmp;
		cin>>tmp;
		b.a.push_back(tmp);
	}
	
	return is;
}

ostream& operator<<(ostream &os, TH b)
{
	cout<<"Tap hop hien tai la: ";
	for(int i=0; i<b.a.size(); ++i)
	{
		cout<<b.a[i]<<" ";
	}
	
	return os;
}

int main()
{
	TH a, b, c;
	
	cout<<"Nhap tap hop a: ";
	cin>>a;
	
	cout<<"Nhap tap hop b: ";
	cin>>b;
	
	cout<<a<<b;
	
	c=a+b;
	cout<<"Hop tap a va b la: "<<c;
}
