#include<iostream>
#include<stdio.h>

using namespace std;

// you cannot pass array directly in function so use pass by address only. we cannot use pass by value anywhere else too.
// we can use *A[], int n
void arrayfun(int A[], int n){ //int A[] is like pointer to an array and int n is number of elements.
  int i;
  for (i=0;i<n;i++){
    printf("%d",A[i]);
  }
}


int main(){
  int A[5] = {2,4,6,8,10};
  arrayfun(A,5);
}