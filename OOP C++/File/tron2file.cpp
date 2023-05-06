#include<bits/stdc++.h>
using namespace std;
bool mycmp(int a, int b)
{
	return a > b ;
}
int main()
{
	vector <int> a;
	ifstream fi1("dulieuA.txt");
	ifstream fi2("dulieuB.txt");
	ofstream fo("ketquaC.txt");
	if(fi1 == NULL || fi2 == NULL || fo == NULL)
	{
		cout <<"\nKhong mo duoc tep!!!";
	}
	else 
	{
		int x;
		while(!fi1.eof()&&!fi2.eof())
		{
			fi1 >> x;
			a.push_back(x);
			fi2 >> x;
			a.push_back(x);
            
		}
	   sort(a.begin(),a.end(),mycmp);
	   for(int i = 0; i < a.size(); i++)
       fo << a[i]<< "   ";
	}
	fi1.close();
	fi2.close();
	fo.close();
    cout <<"\nDa ghi xong file ";
}

