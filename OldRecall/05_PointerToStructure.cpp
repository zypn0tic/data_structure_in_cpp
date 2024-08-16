#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;


  struct Rectangle{
    int length;
    int breadth;
  };

  int main(){
    struct Rectangle r = {10,5};
    struct Rectangle *p = &r;

    r.length = 20; //for normal variable
    (*p).length = 20; //for pointer variable
    p -> length = 20; //for pointer variable mainly used 

  } 
    