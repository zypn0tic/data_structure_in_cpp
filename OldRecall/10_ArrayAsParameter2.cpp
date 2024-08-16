#include<iostream>
#include<stdio.h>

using namespace std;

int * allocateMemory(int n){
  int *p;
  p = (int *)malloc(n*sizeof(int));
  p = new int[n];

  for (int i=0;i<n;i++){
    p[i] = i+1;
  }
  return(p);
}

int main(){
  int *A, sz = 5;
  A = allocateMemory(sz);
  
  for (int i=0;i<sz;i++)
  cout<<A[i]<<endl;
}