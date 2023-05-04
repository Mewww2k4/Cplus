//Bai 1 : Viet chuong trinh C++ de mo 1 file co ten la bai1.txt, ghi noi dung vao file va sau do chuyen thanh dang chu hoa

#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
int main()
{
	ifstream input("bai1.txt");
	ofstream output("kqbai1.txt");
	if(input==NULL||output==NULL)
	{
		cout <<"Khong mo duoc tep!!!";
	}
	else{
	     string a;
	    getline(input, a);
	//    a = a + 32;
	   	output << "Chuoi chu hoa : " <<  a;
	input.close();
	output.close();
}
}
