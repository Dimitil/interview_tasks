#include <iostream>
#include <string>


bool isPaliPer(const std::string str){
    int ar[128]={0};
    int countOdd=0;

    for(int i=0; i<str.size(); i++){
        int val=str[i];
        if(val<0 || val>127) {
            std::cerr<<"NOT ANSII SYMBOL";
            return false;
    }
    ar[val]++;
    if(ar[val] % 2 == 1){
        countOdd++;
    }
    else countOdd--;
    }
    return countOdd <= 1;
}

int main()
{

    std::string str("PaliPalil");

    std::cout<<'\n'<<isPaliPer(str)<<'\n';

}
