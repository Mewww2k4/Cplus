#include<bits/stdc++.h>
using namespace std;

int main()
{
	 ifstream fi("dulieu2.txt");
	 ofstream fo("kq2.txt");
	 ofstream fu("kq3.txt");
	 if(fi == NULL || fo == NULL )
	 
	 	cout << "\nLoi doc / ghi file ";
	 else {
	 	int n, s =0;
	 	int c;
	 	fi >> n;
	 	for (int i = 0 ; i < n ; i++)
	 	{
	 		fi >> c;
	 		if(c%2 != 0 )
	 		s= s+c ;
	 		else
		fu <<"\n cac so chan =  " << c;
	 		
		 }
	 	fo <<"\nTong cac so le = " << s;
	 
	 fi.close();
	 fo.close();
	 fu.close();
	 cout <<"\nXu li xong ";
    }
}
