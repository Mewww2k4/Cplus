#include<bits/stdc++.h>
using namespace std;

//lop: class
//  {  thuoc tinh: attribute  // private
//    phuong thuoc: method, behavior   // public}

//doi tuong : object
//constructor : ham khoi tao khi khai bao moi
//destructor: ham huy (khong co gia tri tra ve) bat dau bawng ~

// this : con tro this
//setter - getter : chinh sua  - lay thuoc tinh



//-tính chat dau tien cua oop 
//+Encapsulation: dong goi
//+Access modifier: { private , public, protected }-> dinh nghia pham vi truy cap
//stactic 
 
//SV001 => SV002 => SV003;              
class SinhVien
{
	//thuoc tinh va phuong thuc 
	private:   //thuoc tinh
		string id, ten, ns;
		double gpa;
		static int dem;
	public:    //phuong thuc 
	    SinhVien();    //constructer
	    SinhVien(string, string, string, double);     //constructer
	    ~SinhVien();    //hamhuy

		void input();
		void output();
//		void abc();
//		void setGPA(double);
//		double getGPA();
//		double getID();
//		string getNS();
//		string getTEn();
		void TangDem();
		int getDem();
	
};
//Implementation
SinhVien::SinhVien(){ //ham ko co gia tri tra ve;
	this->id = this->ten = this->ns = "";
	this->gpa = 0;
}
int SinhVien::dem = 0;

void SinhVien::TangDem()
{
	++dem;
}
int SinhVien::getDem()
{
	return dem;
}
SinhVien::SinhVien(string ma, string name, string birth, double point)
{
//	cout<< " Ham khoi tao co tham so duoc goi !\n ";
//	id = ma;
//	ten = name;
//	ns = birth;
//	gpa = point;


//--- su dung con tro this --- 
     this->id = id;
     this->ten = ten;
     this->ns = ns;
     this->gpa = gpa;
}
SinhVien::~SinhVien()
{
	
}
void SinhVien::input()
{
	++dem; //dem = 1
	this->id = "SV" + string(3-to_string(dem).length(), '0') + to_string(dem);
	//dem = 1 => "1"
	cout << " Nhap ten :";  getline(cin,this->ten);
	cout << " Nhap ns : ";  cin >> this->ns;
	cout << " Nhap diem :"; cin>>this->gpa;
	cin.ignore();
}
void SinhVien::output()
{
	cout <<this->id << "   " << this->ten << "  " << this->ns << "  " << fixed << setprecision(2) << this->gpa << endl;
}

//double SinhVien::getGPA(){
//	return this->gpa;
//}
//void SinhVien::setGPA(double gpa)
//{
//	this->gpa = gpa;
//}
//bool cmp(SinhVien a, SinhVien b) // sap sep giam dan theo diem gpa
//{
//	return a.getGPA() > b.getGPA() ;
// } 
int main()
{
//	SinhVien x;
//	x.DiHoc();
//	x.Xinchao();
//	x.input();
//	x.output();
//    int n; cin >> n;
//    SinhVien a[100];
//    for(int i = 0 ; i < n ; i++)
//    {
//    	a[i].input();
//	}
//	sort(a,a+n,cmp);
//	for(int i = 0 ; i < n ; i++)
//	{
//		a[i].output();
//	}
//    x.setGPA(2.18);
//    x.input();
//    SinhVien y = x;
//    y.output();
//     x.TangDem(); //dem = 1;
//     x.TangDem(); //dem = 2;
//     SinhVien y;
//     cout << y.getDem() << endl;
    SinhVien x;
    x.input();
    x.output();
	return 0; 
}
 

