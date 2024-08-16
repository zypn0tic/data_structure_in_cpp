#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main(){
  int n,a;
  cout << "Enter any number to convert into Binary : ";
  cin >> n;
  a = n;

  int ans = 0;
  int i = 0; 
  
  while (n != 0) {
    int bit =  n & 1;
    ans = (bit * pow(10,i)) + ans;
    n = n >> 1;
    i++;
  }

  cout << "The converted Binary digit of digit "<< a << " is : " << ans << endl;
  
}
