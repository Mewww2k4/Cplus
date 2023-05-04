#include<iostream>
#include<algorithm>
#include<vector>
#include<string> 
#include<fstream> 
using namespace std;
bool mycmp(int a , int b)
{
  return a < b;
}
int main()
{
  vector <int> a;
  ifstream in("data.txt");
  ofstream ou("datasx.txt");
  if(in == NULL || ou == NULL)
  {
    cout <<"No open file in/ou !!!";
  }
  else {
    int x;
    while(!in.eof())  //lap den cuoi file !!! 
    {
      in >> x;
      a.push_back(x);
    }
    int n = a.size();
    sort(a.begin(), a.end(),mycmp);
		for (int i = 0 ; i < n ; i++)
		{
			ou << a[i] << " ";
		}
  }
  in.close();
  ou.close();
  cout <<"Complete!!!";
}
