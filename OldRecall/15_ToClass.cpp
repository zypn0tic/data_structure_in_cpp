// This is an adaptation of previous program using OOPS concept (only class and constructor)
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

class Rectangle{

  private:
  
  int length;
  int breadth;

  public:

  Rectangle(int l, int b){ // This is constructor and this will automatically call the value of same name in main function. And it must have same name as class.
    length = l;
    breadth = b;
  }

  int area(){
    return (length*breadth);
  }

  void changelength(int l){
    length = l;
  }

};
  int main(){
    Rectangle r(10,5);
    
    cout<<r.area()<<endl;
    r.changelength(20);
    cout<<r.area()<<endl;
  }



