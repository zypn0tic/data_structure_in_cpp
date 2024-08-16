#include<iostream> //Remember to watch a bitwise Manipulation Playlist.

int main(){

  int m,n,mask = 0;

  std::cout<<std::endl;
  std::cout<<"Enter any number : ";
  std::cin>>n;
  std::cout<<std::endl;
  m = n;

  if (n == 0)
  return 1;

  while (m != 0){
    mask = (mask << 1) | 1;
    m = m >> 1;
  }

  int ans = (~n) & mask;
  
  std::cout<<"Compliment of "<<n<<" is "<<ans<<std::endl;
  std::cout<<std::endl;
}
