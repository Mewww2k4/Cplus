#include<bits/stdc++.h>
using namespace std;

int main()
{
	int count[200]={0};
	ifstream fi("baitho.txt");
	ofstream fo("tansuat.txt");
	if(fi == NULL || fo == NULL )
	{
		cout << "Khong mo duoc file!!!";
	}
	else 
	{
		char c;
		while(!fi.eof()){
			fi >> c;
				count[c]++;
			}
		}
		for (int i = 0 ; i < 200 ; i++){
			if(count[i]>0){
				fo << (char)i <<" : " << count[i] << endl;
			}
		}
	fi.close();
	fo.close();
	cout <<"\nDa ghi ket qua vao file tansuat.txt!!!";
	}


