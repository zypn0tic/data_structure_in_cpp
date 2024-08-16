#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

struct Rectangle{
  int length;
  int breadth;
};

struct Rectangle *fun(){ // returning a pointer to an structure.
  struct Rectangle *p;
  p = new Rectangle;
  // p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
  p->length = 15;
  p->breadth = 7;

  return p;
}

int main(){
  struct Rectangle *r = fun();
  cout<<"Length "<<r->length<<" Breadth "<<r->breadth<<endl;
  return 0;
}