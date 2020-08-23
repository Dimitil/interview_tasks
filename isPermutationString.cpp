#include <iostream>
#include <string>
#include <algorithm>

bool isPermutation(std::string str1, std::string str2){
    if(str1.size()!=str2.size()) return false;

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    return str1==str2;


}


int main()
{

    std::string str1("hello");
    std::string str2("lloeh");
    if(isPermutation(str1, str2)){
    std::cout<<"\nYES 1\n";
    }
    else return 1;

    std::string str3("llo");
    std::string str4("leh");
    if(!isPermutation(str3, str4)){
    std::cout<<"\nNO 2\n";
    return 0;
    }
    else return 1;
}
