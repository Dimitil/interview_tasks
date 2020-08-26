#include <string>
#include <iostream>

std::string compressStr(std::string str){
    int counter=1;
    std::string res("");
    auto it=str.begin();

    res.push_back(*it);            
    while(it!=(str.end()-1))
    {
        if(*it!=*(it+1)){
        res.push_back(counter+'0');
        res.push_back(*(it+1));
        counter=1;
        }
        else{
            counter++;
        } 
        it++;
    }
    if(*it==*(it-1))
    {
        res.push_back(counter+'0');
    }
    else {
        res.push_back('1');
    }
    return (res.size()>str.size()) ? str : res;
    
}

int main()
{
    std::string str("abbbbbbbbcdiioqw");
    std::cout<<compressStr(str);
    return 0;
}
