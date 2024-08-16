#include<iostream>
#include<climits>

int main() {

  int rev = 0,n,a,ld;
  std::cout<<"Enter any number to get the reverse : ";
  std::cin>>n;
  a = n;
  
  while( n!=0 ) {

    ld = n % 10;

    if (rev < (INT_MAX)/10 && rev > (INT_MIN)/10) {
      rev = rev * 10 + ld;
    }
    else{
      return 0;
    }
    n = n / 10;
  }

  std::cout<<"The reverse of integer is "<<rev<<std::endl;

}