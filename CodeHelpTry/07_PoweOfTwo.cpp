#include<iostream>
#include<cmath>
using namespace std;

int main(){
  int n,count = 0;
  cout << "Enter any number to check if it is power of Two : ";
  cin >> n;

  for (int i=0;i<31;i++){
    if ((pow(2,i))==n){
      count += 1;
    }
  }

  if (count>=1){
    std::cout<<"The number "<<n<<" is power of 2"<<std::endl;
  }
  else{
    std::cout<<"The number "<<n<<" is not power of 2"<<std::endl;
  }

}