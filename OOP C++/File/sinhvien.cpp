#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string ten;
	float diem;
};
bool mycmp(const SinhVien a, const SinhVien b)
{
	return a.ten < b.ten;
	
}
int main()
{
	vector <SinhVien> sv;
	ifstream fi("dulieu7.txt");
	ofstream fo("khen.txt");
	if(fi == NULL || fo == NULL)
	{
		cout <<"\nKhong mo duoc file!!!";
	}
	else {
		
		string ten;
		float diem;
		while (!fi.eof())
		{
			fi >> ten;
			fi >> diem;
	    	if(diem > 7)
	    	{
	    			sv.push_back({ten,diem});
			}
		}
		sort(sv.begin(), sv.end(), mycmp);
		for(int i = 0 ; i < sv.size(); i++)
		{
			fo << sv[i].ten << "  " << sv[i].diem << endl;
		}
		
	}
	fi.close();
	fo.close();
	cout <<"\nDa xong!!!";
}
