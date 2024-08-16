#include <iostream>
#include<algorithm>

int main(){
  int i,n,product=1,sum=0;
  std::cout<<"Enter any number"<<std::endl;
  std::cin>>n;
  while(n!=0){
    int ld = n % 10;
    if (ld !=0 ){
      product = product * ld;
      sum = sum + ld;
    }
    else{
      continue;//Thought that this will work on the number including but didn't. 
    }
    n = n / 10;
  }

  std::cout<<"The difference of product and sum of given integer is : "<<product-sum<<std::endl;

}







