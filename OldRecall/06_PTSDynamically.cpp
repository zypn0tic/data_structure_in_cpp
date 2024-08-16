#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;


  struct Rectangle{
    int length;
    int breadth;
  };

  int main(){
    struct Rectangle *p; //you can skip writing struct in c++ but cannot in c
    // allocate object of Rectangle a dynamic memory in heap
    p = (struct Rectangle *)malloc(sizeof(sizeof(struct Rectangle)));//we have typecast malloc function as it returns void by default in C
    p = new Rectangle; // here easy syntax in c++
    p->length = 10;
    p->breadth = 5;

    cout<<p->length<<endl;
    cout<<p->breadth<<endl;
  }