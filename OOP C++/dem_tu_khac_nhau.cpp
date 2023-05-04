#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int count[200] = {0};
	ifstream fi("baitho.txt");
	ofstream fo("cactu.txt");
	if(fi == NULL || fo == NULL){
		cout <<"\nKhong mo duoc file doc/ghi ";
	}
	else {
		char c;
	     while(!fi.eof())
	     {
	     	fi >> c;
	     //	count[c]++;
	     	if(count[c] == 0)
	     	{
	     		break;
			 }
		 }
		 for (int i = 0; i < 200; i++){
		 	fo << (char)i ;
		 }
	}
	fi.close();
	fo.close();
	cout <<"Da xong !!!";
}
