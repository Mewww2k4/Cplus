#include<bits/stdc++.h>
 using namespace std;
 
 int main(int argc, char **argv)
 
 {
 	if(argc < 2 )
 	cout <<"\n khong tim so lon nhat \n";
 	else
 	{
 		int m = 0;
 		for (int i = 1; i < argc ; i++)
 		{
 			int t = atoi(argv[i]);
 			cout <<" "<<argv[i];
 			if(t>m)
			 m=t;
		 }
		 cout <<"\n so lon nhat = "<<m<<"\n";
	 }
 }
