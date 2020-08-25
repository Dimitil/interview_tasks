#include <iostream>
#include <string>


bool isPaliPer(const std::string str){
    int* ar=new int[128];
    int countOdd=0;

    for(int i=0; i<str.size(); i++){
        ar[str[i]]++;
        if(ar[str[i]] % 2 == 1){
            countOdd++;
        }
        else countOdd--;
    }

    return countOdd <= 1;
}

int main()
{

    std::string str("PaliPalillqwei");

    std::cout<<'\n'<<isPaliPer(str)<<'\n';

}
