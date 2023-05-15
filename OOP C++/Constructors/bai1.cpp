#include<iostream>
using namespace std;
class Movie{
  private:
    string title;
    int year;
    string name;
    string director;
  public:
    
    
    void setTitle(string);
    void setYear(int);
    void setDirector(string);
};
// Movie::Movie(string n)
// {
//     name = n;
// }
void Movie::setTitle(string t)
{
    title = t;
    cout << "The Title : " << title << endl;
}
void Movie::setYear(int y){
    year = y;
    cout << "The Year : " << year << endl;
}
void Movie::setDirector(string d)
{
    director = d;
    cout << "The Director : " << director << endl;
}
int main(){
    Movie b;
  
    b.setTitle("Khi toi lon");
    b.setYear(2022);
    b.setDirector("Nguyen Thuy Trinh");
}