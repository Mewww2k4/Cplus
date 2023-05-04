#include<iostream>

using namespace std;

int main(int argc, char **argv)
{
	cout << " \n xin chao ";
	for(int i = 0; i < argc ; i++)
	cout <<"\n "<< i << ":" << argv[i];
	return 0;
}
