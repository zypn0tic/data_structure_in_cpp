#include<iostream>
#include<stdio.h>

struct Rectangle{
  int length;
  int breadth;
  char x;
};


int main(){
  struct Rectangle r1 = {10,5};
  r1.length = 15;
  r1.breadth = 10; 
  std::cout << "The area of Rectangle is : " << r1.length*r1.breadth << std::endl;
  std::cout << sizeof(r1) << std::endl;
}