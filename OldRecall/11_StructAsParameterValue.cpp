#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

struct Rectangle{
  int length;
  int breadth;
};

int area(struct Rectangle a){
  return a.length*a.breadth; 
}

int main(){
  struct Rectangle r = {10,5};
  printf("%d", area(r));
  return 0;
}