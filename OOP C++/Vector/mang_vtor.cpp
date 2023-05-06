#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> a;
	vector<int> ::iterator it;
	for(int i=1;i<10;i++)a.push_back(i);
	cout<<"\n Noi dung vector:";
	for(int i=0;i<a.size();i++)cout<<a.at(i)<<" ";
	a.pop_back(); a.pop_back();   //l?y ph?n t? phía sau
	it=a.begin();
	a.insert(it+3,1000);  //chèn
	a.erase(it+5);   //xóa
	cout<<"\n Noi dung vector:";
	for(int i=0;i<a.size();i++)cout<<a.at(i)<<" ";
} 
