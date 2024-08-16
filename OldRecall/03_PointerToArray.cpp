#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main(){
  /*   int A[5] = {2,4,6,8,10}; //This is in stack frame
  int *p;
  p = A; //if you want to use specific then use & like p = &A[0]

  for (int i=0;i<5;i++){
    cout<<A[i]<<endl;
  } */

 int *p;

 p = new int[5];// in c++
 p = (int *)malloc(5*sizeof(int)); // in c, 5*sizeof(int) is in heap memory

 p[0]=10;p[1]=15;p[2]=14;p[3]=21;p[4]=31;

  //Accessing using pointer
 for (int i=0;i<5;i++){
  cout<<p[i]<<endl;
 }

 delete [ ] p; // after using use it as it dynamically allocation in c++ // it is crucial in company not in small projects.
 free(p);
  
  return 0;
}
