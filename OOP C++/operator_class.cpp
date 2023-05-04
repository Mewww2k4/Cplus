#include<bits/stdc++.h>
using namespace std;
class TH{
  private: 
    vector <int> a;
    public:
          friend istream &operator >> (istream &is, TH &b)
          {
              int n;
                is >> n; 
                b.a.resize(n);
                for (int i = 0; i < n; i++) {
                is >> b.a[i] ;
             }
            return is;
          }
          friend ostream &operator << (ostream &os, TH b)
          {
                for (int i = 0; i < b.a.size(); i++)
                 {
                   os << b.a[i] << "   ";
                 }
            return os;
          }
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
              TH c;
              c.a = a; 
              for (int i=0; i<b.a.size(); i++)
              {
                c.a.erase(remove(c.a.begin(), c.a.end(), b.a[i]), c.a.end());
              }
                return c;
              }
              TH operator*(TH b)
              {
             TH c;
                 for (int i=0; i<a.size(); ++i)  {
                  for (int j=0; j<b.a.size(); ++j)  {
                      if (a[i] == b.a[j]) {
                       c.a.push_back(a[i]);
                      break;
                    }
                  }
                }
                return c;
              }
};
int main()
{
  TH a, b, c;
  cout <<"Nhap tap hop a : "; cin >> a;
  cout <<"Nhap tap hop b : "; cin >> b;
  cout << a << b;
   c = a + b;
   cout <<"\n Hop tap a va b la " << c;  
   c = a - b ;
   cout <<"\nHieu 2 tap hop A va B la : " << c;
   c= a*b;
   cout <<"\nGiao cua 2 tap hop A va B la : " << c;
   return 0;
}
