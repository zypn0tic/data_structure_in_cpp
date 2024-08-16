#include<iostream>
using namespace std;

class Rectangle{

  private:
  int length;
  int breadth;

  public:
  Rectangle();
  Rectangle(int l, int b);
  Rectangle(Rectangle &r);
  int getLength(){return length;}
  int getBreadth(){return breadth;};
  void setLength(int l);
  void setBreadth(int b);
  int area();
  int perimeter();
  bool isSquare();
  ~Rectangle();

};

class Cuboid:public Rectangle{

  private:
  int height;

  public:
  Cuboid(int h){
    height = h;
  }

  int getHeight(){return height;}
  void setHeight(int h){height = h;}
  int Volume(){return getLength()*getBreadth()*height;}

};


int main(){
  Cuboid c(5);
  c.setLength(10);
  c.setBreadth(10);
  cout<<"The volume of cuboid is "<<c.Volume()<<endl; 
  return 0;
}

Rectangle::Rectangle(){
  length = 1; 
  breadth = 1;
}

Rectangle::Rectangle(Rectangle &r)
{
  length = r.length;
  breadth = r.breadth;
}

Rectangle::Rectangle(int l, int b){
  length = l;
  breadth = b;
}

int Rectangle::area(){
  return length*breadth;
}

void Rectangle::setLength(int l)
{
  length = l;
}

void Rectangle::setBreadth(int b)
{
  breadth = b;
}

int Rectangle::perimeter()
{
  return 2*(length+breadth);
}

bool Rectangle::isSquare(){
  return length == breadth;
}

Rectangle::~Rectangle(){
  cout<<"Rectangle Destroyed"<<endl;
}