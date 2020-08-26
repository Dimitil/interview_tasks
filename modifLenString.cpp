#include <iostream>
#include <string>

bool isOneDelete(std::string str1, std::string str2){
    int diffCount=0;
    for(int firIt=0, secIt=0; firIt<str1.size(), secIt<str2.size(); firIt++, secIt++){
        if(diffCount>1) return false;
        else if(str1[firIt]!=str2[secIt]){
            diffCount++;
            firIt++;
        }
    }
    return true;
}


bool isOneReplace(std::string str1, std::string str2){
    int diffCount=0;
    for(int firIt=0, secIt=0; firIt<str1.size(), secIt<str2.size(); firIt++, secIt++){
        if(diffCount>1) return false;
        else if(str1[firIt]!=str2[secIt]) {
            diffCount++;
        }
    }
    return true;
}



bool isOneModification(std::string str1, std::string str2){//1 or 0 modification
    if(str1.size()==str2.size()) return isOneReplace(str1, str2);
    else if(str1.size()+1==str2.size()) return isOneDelete(str1, str2);
    else if(str2.size()-str1.size() > 1) return isOneDelete(str2, str1); 
    else return false;
}



int main()
{
    std::string str1("pale");
    std::string str2("pae");

    std::cout<<'\n'<<isOneModification(str1, str2)<<'\n';

    return 0;
}
