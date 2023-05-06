#include<bits/stdc++.h>
using namespace std;

class Counter{
    private: 
          static int count ;
    public: 
           Counter(){
            count ++;
           }
          static void showcount(){
             cout <<"Number of counter object created : "<< count << endl;
          }
};
int Counter::count = 0;// bien dem bang 0;
int main()
{
  Counter a;
  Counter::showcount();
  Counter b;
  Counter::showcount();
}