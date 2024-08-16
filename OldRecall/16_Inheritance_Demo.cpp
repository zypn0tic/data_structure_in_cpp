#include<iostream>
using namespace std;

class Base{
  public:
  int a;
  void display(){
    cout<<"This is Base Class of value "<<a<<endl;
  }
};

class Derive:public Base{
  public:
  void show(){
    cout<<"This is Derived Class of value "<<a<<endl;
  }
};

int main(){
  Derive d;
  d.a = 500;
  d.display();
  d.show();
  return 0;
}






