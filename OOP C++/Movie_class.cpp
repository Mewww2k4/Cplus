#include<bits/stdc++.h>
using namespace std;
class Movie{
  private:
       string NameMovie;
       string Director;
       int Year;
  public: 
        void Input(){
          cout <<"Input NameMovie : "; getline(cin,NameMovie);
          cout <<"Input Director : "; getline(cin,Director);
          cout <<"Input publishing year  : "; cin >> Year;
          cin.ignore();
        }
        void Ouput(){
          cout<<NameMovie<<"\t\t"<<Director<<"\t\t"<<Year;
        }
        friend istream &operator >>( istream &is , Movie &b)
        {
          cout <<"Input Name Movie : "; getline(is, b.NameMovie);
          cout <<"Input Name Director : "; getline(is, b.Director);
          cout <<"Input publishing year  : "; is >> b.Year;
          cin.ignore();
          return is;
        }
        friend ostream &operator << (ostream &os, Movie &b){
          os <<b.NameMovie<<"\t\t"<<b.Director<<"\t\t"<<b.Year<<endl;
          return os;
        }
        bool operator ==(Movie b)
        {
              if(NameMovie.compare(b.NameMovie)==0)
              return 1;
              else return 0;
        }
        void SetName(string NameDirector)
        {
              Director = NameDirector;
        }
        Movie(string mv = " ", string dr = "" , int y = 0)
        {
          NameMovie = mv;
          Director = dr;
          Year = y;
        }
        Movie(const Movie &b)
        {
          NameMovie = b.NameMovie;
          Director = b.Director;
          Year = b.Year;
        }
        

};
int main(){
 
  Movie a, b;
  cout<<"The first Movie input \n";
  a.Input();
  cout<<"The second Movie input \n ";
  cin >> b;
  cout<<"----------------------------------------------------------------\n";
  cout <<"Name Movie"<<"\t\t"<<"Director"<<"\t"<<"Year publishing"<<endl;
  a.Ouput();
  cout <<"\n"<< b;

  if(a==b)
  {
     cout <<" Two movies with the same director !!!\n";
  } else{
    cout <<"Two movies no the same director!!!\n";
  }
  cout <<"    -----------Name Director after change----------------    ";
  cout <<"\nName Movie"<<"\t\t"<<"Director"<<"\t"<<"Year publishing"<<endl;
  a.SetName("Chris Columbus");
  cout << a;
  cout<<"----------------------------------------------------------------\n";
  cout <<"\nName Movie"<<"\t\t"<<"Director"<<"\t"<<"Year publishing"<<endl;
  Movie c(a);
  cout << c;
  Movie d(b);
  cout << d;
  return 0;

}
