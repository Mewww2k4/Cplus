#include<bits/stdc++.h>
using namespace std;

int main()
{
	ifstream fi("dulieu4.txt");
	ofstream fo("kq4.txt");
	if(fi == NULL || fo == NULL )
	{
		cout <<"\nKhong mo duoc tep!!!";
	}
	else 
	{
		int c;
        int max , min, batdaufile=1;
        fi >> c;
        max = c;
        min = c;
        while(!fi.eof())
        { 
		     fi >> c;
        	if(batdaufile==1)
            {
            	max = min = c ;
            	batdaufile = 0;
			}
			else{
        	if(c > max)
        	max = c;
            if (c < min )
            min = c;
           }
		}
		fo <<"\nMax = " << max << "\nMin = " << min ;
		fi.close();
		fo.close();
		cout <<"\nXu li xong ";
	}
}
