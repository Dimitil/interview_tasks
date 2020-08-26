#include <string>
#include <iostream>

std::string compressStr(std::string str){
    int counter=1;
    std::string res;
    int index1=0;

    while(index1<str.size())
    {
        if(index1==0) res.push_back(str[index1]);
        if(str[index1]==str[index1+1]) counter++;
        else {
            res.push_back(counter+'0');
            counter=1;
            res.push_back(str[index1+1]);
        }
        index1++;
        
    }
    return (res.size()>str.size()) ? str : res;
    
}

int main()
{
    std::string str("aabbbbccc");
    std::cout<<compressStr(str);
    return 0;
}
