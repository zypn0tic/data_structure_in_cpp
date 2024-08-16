#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main(){
  int n,a,b;
  cout << "Enter any number to convert into Decimal : ";
  cin >> n;
  a = n;

  int ans = 0;
  int count = 0; 
  
  while (n != 0) {
    n = n / 10;
    count++;
  }

  for (int i=0;i<count;i++) {
    int ld = a % 10;
    ans = ans + pow(2,i);
  }

  cout << "The converted Decimal number of digit is : " << ans << endl;
  
}