#include<bits/stdc++.h>

using namespace std;
bool mycmp(int a, int b)//ham sap xep giam dan.
{
	return a > b ;
}
int main()
{
	vector <int> values;
	vector <int>::iterator it;
	ifstream fi("dulieu.inp");
	ofstream fo("ketqua.out");
	if (fi.fail() || fo.fail())
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
		it= values.begin();
		int cntODD=0;
		for(int i = 0 ; i < n; i++)
		{
			// 2. xoa phan 3 tu le dau tien.
			if(values[i]%2 != 0)
			{
		    	values.erase(it+i);
		    	--i;
		    	++cntODD;
		    	--n;
		    	if (cntODD == 3)		    
				
				break;
	    	}

		}
		//3.sap xep theo tu tu giam dan
		sort(values.begin(), values.end(),mycmp);
		for (int i = 0 ; i < n; i++)
		{
			//4.Ghi vao file output.txt
			fo << values[i] << " ";
		}
		fi.close();
		fo.close();
		cout << "Complete!!!";
	}
	
}

