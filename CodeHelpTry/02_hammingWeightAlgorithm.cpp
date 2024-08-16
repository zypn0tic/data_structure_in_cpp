#include <iostream>
#include<algorithm>

__uint32_t hammingWeight(__uint32_t a){
    int count = 0;
    while(a != 0){
        if (a & 1){
            count++;
        }
        a = a >> 1;
    }
    return count;
}

int main(){
    int hw;
    __uint32_t n;
    std::cout<< "Enter a number to calculate hammingWeight Value : ";
    std::cin>> n;
    hw = hammingWeight(n);
    std::cout<<"The hammingWeight Value of "<<n<<" is "<<hw<<std::endl;
}





