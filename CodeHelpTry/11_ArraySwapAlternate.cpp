#include<iostream>
#include<algorithm>
int n;

void Print(int arr[]){
  for (int i=0;i<n;i++){
    std::cout<<arr[i]<<" ";
  }
  std::cout<<std::endl;

}

void Swap(int arr[]){
  for (int i=0;i<n;i+=2){
    if (i+1 < n){
      std::swap(arr[i],arr[i+1]);
    }
  }

}


int main(){

  std::cout<<"Enter any numbers of elements for in Array : ";
  std::cin>>n; 
  int arr[n];
  std::cout<<"Enter elements for array : ";
  for (int i=0;i<n;i++){
    std::cin>>arr[i];
  }
  Swap(arr);
  Print(arr);
  
}