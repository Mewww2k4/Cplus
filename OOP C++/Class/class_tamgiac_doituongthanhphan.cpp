#include <iostream>
#include <cmath>

using namespace std;

class Diem{
	int x, y;
	public: 
	    void Nhap(){
	    	cout <<"Nhap x: "; cin >> x; 
	    	cout <<"Nhap y: "; cin >> y;
		}
		void In(){
			cout <<"\nx = " << x <<" y = " << y;
		}
		float kc(Diem b){
			return sqrt(pow(this->x-b.x,2)+pow(this->y-b.y,2));
		}
		float dt1(Diem b, Diem c)
		{
			float k1, k2, k3;
			k1 = kc(b); 
			k2 = kc(c);
			k3 = b.kc(c);
			float p = (k1 + k2 + k3)/2;
			float s = sqrt(p*(p-k1)*(p-k2)*(p-k3));
			return s;
		}
		float dt2(Diem b, Diem c)
		{
			float s = 0;
			s = abs((c.x-x)*(b.y-y)-(b.x-x)*(c.y-y));
			return s/2.0;
		}

	friend istream& operator>>(istream& is, Diem& d)
	{
	    cout << "\nNhap x: "; is >> d.x;
	    cout << "Nhap y: "; is >> d.y;
	    return is;
	}

	friend ostream& operator<<(ostream& os, const Diem& d)
	{
	    os << "x = " << d.x << ", y = " << d.y;
	    return os;
	}
};
class TamGiac{
	private:
	    Diem d1, d2, d3;
	public:
	    void Nhap()
	    {
	      cout << "\nNhap diem d1: "; cin >> d1;
	      cout << "Nhap diem d2: "; cin >> d2;
	      cout << "Nhap diem d3: "; cin >> d3;
	    }
	    void In()
	    {
	      cout << "d1: " << d1 << ", d2: " << d2 << ", d3: " << d3 << endl;
	    }
	    float dt()
	    {
	      float a, b, c, p;
	      a = d1.kc(d2);
	      b = d2.kc(d3);
	      c = d3.kc(d1);
	      p = (a + b + c) / 2;
	      return sqrt(p * (p - a) * (p - b) * (p - c));
	    }
};

int main (){
    Diem a,b,c;
    a.Nhap(); b.Nhap(); c.Nhap(); a.In(); b.In(); c.In();
    cout <<"\nKhoang cach giua a va b: " << a.kc(b);
    cout <<"\nKhoang cach giua b va a: " << b.kc(a);
    cout <<"\nKhoang cach giua c va b: " << c.kc(b);
    cout <<"\nDien tich hinh tam giac 1 la : " << a.dt1(b,c);
    cout <<"\nDien tich hinh tam giac 2 la : " << a.dt2(b,c);
    TamGiac m;
    cout << "\nNhap tam giac thu nhat";
    m.Nhap();
    cout << "Sau khi nhap \n";
    m.In();
    cout << "Dien tich tam giac = " << m.dt();
}


