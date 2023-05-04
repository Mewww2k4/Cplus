//1. Van de A
//Su dung thu vien vector fstream v� thuat to�n, h�y viet chuong tr�nh:
//- lay tat ca c�c gi� tri tu tep input.inp (chua c�c gi� tri so nguy�n) v� luu tru trong vector
//- Loai bo gi� tri le dau ti�n khoi v�c to V.
//- Sap xep tAt ca c�c gi� tri trong V theo thu tu giam dan (d�ng h�m sap xep)
//- Ghi tat ca c�c gi� tri trong vector V v�o file output.out

#include<iostream>
#include<fstream>
#include<cstring>
#include<vector>

using namespace std;
bool mycmp(int a, int b)
{
	return a > b ;
}
int main()
{
	vector <int> values;
	ifstream fi("input.txt");
	ofstream fo("output.txt");
	if (fi == NULL || fo == NULL)
	{
		cout <<"\nFile Read/Write no open !!!";
	}
	else {
		int x;
		while(!fi.eof())
		{
			fi >> x;
		    values.push_back(x);
		}
		int n = values.size();
		for(int i = 0 ; i < n; i++)
		{
			// 2. xoa phan 3 tu le dau tien.
			if(values[i]%2 != 0)
			{
		    	values[i]=values[values.size()-1];
		    	break;
	    	}

		}
		//3.sap xep theo tu tu giam dan
		sort(values.begin(), values.end(),mycmp);
		for (int i = 0 ; i < n; i++)
		{
			//4.Ghi vao file output.txt
			fo << values[i] << "   ";
		}
		fi.close();
		fo.close();
		cout << "Complete!!!";
	}
	
}
