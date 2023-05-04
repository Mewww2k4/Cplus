#include<bits/stdc++.h>
using namespace std;

int main()
{
	ifstream in("dulieu1.txt");
	ofstream ou("ketqua1.txt");
	if(in == NULL||ou == NULL)
	{
		cout <<"\nFile doc/ghi khong co san!!!";
	}
	else 
	{
		int count = 0;
	    string words;
	    while(in >> words)
	    {
	        count ++;
	    }
	ou <<"So tu co trong chuoi : " << count;

	}
	in.close();
	ou.close();
	cout << "\nXU LI XONG !!!";
	
}
