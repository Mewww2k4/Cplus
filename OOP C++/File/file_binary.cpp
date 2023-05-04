#include<bits/stdc++.h>
using namespace std;
int main()
{
	char *c = new char[1];
	ifstream fi("a.jpg", ios::in|ios::binary);
	ofstream fo("b.jpg", ios::out|ios::binary);
	if(fi==NULL||fo == NULL)
	{
		cout <<"File khong mo duoc!!!";
	} else
	{
		long bg = fi.tellg();
		fi.seekg(0, ios::end);
		long end = fi.tellg();
		long size = end - bg;
		int i = 1; 
		fi.seekg(0,ios_base::beg);
		while (i < size)
		{
			fi.read(c,1);
			fo.write(c,1);
			i++;
		}
		fi.close();
		fo.close();
		cout <<"\nDa chep xong!!!";
	}
}

