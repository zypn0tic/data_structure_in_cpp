#include<iostream>
#include<stdio.h>

using namespace std;

// Only c++ allows this but not c.
// This is like machine is monolithic program and source code is procedural.
void swap(int &x, int &y){ //dereferencing 
  int temp = x;
  x = y;
  y = temp;
}

int main(){
  int a,b;
  a = 20;
  b = 10;
  swap(a , b); //Another use of pointer
  printf("%d %d \n", a,b);  
}