#include<iostream>
#include<vector>

using namespace std;


int main()
{
	vector<int> a;
	vector<int> ::iterator it;
	for(int i = 1; i < 10 ; i++)  
  a.push_back(i);
	cout <<"\nNoi dung vector : ";
	for(int i = 0; i < a.size(); i++)
	cout << a.at(i)<< "   ";
	a.pop_back() ; a.pop_back();
	it = a.begin(); // tao bien baat dau 
	a.insert(it + 3,1000); // chen dooi tuong vao vi tri thu 3 
	a.erase(it+5);
	cout <<"\nNoi dung vector : ";
	for(int i =0; i < a . size(); i++)
	cout <<a.at(i)<<"   ";
	return 0;
}
