#include<iostream>
#include<algorithm>
int n;

void Unique(int arr[]){
  int thatDigit = 0;
  for (int i=0;i<n;i++){
    thatDigit = thatDigit ^ arr[i];
    
  }
  std::cout<<"That Unique digit in odd number series is "<<thatDigit<<std::endl;
}



int main(){

  std::cout<<"Enter any numbers of elements for in Array : ";
  std::cin>>n; 
  int arr[n];
  std::cout<<"Enter elements for array : ";
  for (int i=0;i<n;i++){
    std::cin>>arr[i];
  }
  Unique(arr);
}