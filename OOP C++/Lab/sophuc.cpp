#include <bits/stdc++.h>
using namespace std;

// x = ax +bi
class ccomplex {
	int a,b;
	public :
		ccomplex(int r , int i){
			a = r ;
			b = i ;
		};
		void display();
};

void ccomplex::display() {
	if(b < 0)
      if(b == -1)
         cout << "complex: "<< a << "-i" << endl;
      else
         cout << "complex: "<< a << b << "i" << endl;
      else
         if(b == 1)
            cout << "complex: "<< a << " + i"<< endl;
         else
            cout << "complex: "<< a << " + " << b << "i" << endl;
}

ccomplex ccomplex::add(ccomplex n1 , ccomplex n2)
{
	ccomplex nw(0,0);
	nw.a = n1.a + n2.a;
	nw.b = n2.b + n2.b;
	return nw;
}

int main(){
	// x = 3x + 2i
	ccomplex n(3, 2);
	n.display();
}
