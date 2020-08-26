#include <iostream>
#include <string>

bool isOneDelete(std::string str1, std::string str2){
    int index1=0, index2=0;
    while(index1<str1.size() && index2<str2.size())
    {
        if(str1[index1]!=str2[index2]){
            if(index1!=index2) return false;
            index1++;
        }
        index1++;
        index2++;
    }
       return true;
}


bool isOneReplace(std::string str1, std::string str2){
    int diffCount=0;
    int index1=0, index2=0;

   while(index1<str1.size() && index2<str2.size()){
       if(str1[index1]!=str2[index2]){
           diffCount++;
       }
       index1++;
       index2++;
       if(diffCount>1) return false;
    } 
    return true;
}



bool isOneModification(std::string str1, std::string str2){//1 or 0 modification
    if(str1.size()==str2.size()) return isOneReplace(str1, str2);
    else if(str1.size()+1==str2.size()) return isOneDelete(str1, str2);
    else if(str1.size()-1==str2.size()) return isOneDelete(str2, str1); 
    else return false;
}



int main()
{
    std::string str1("pla");
    std::string str2("ple");

    std::cout<<'\n'<<isOneModification(str1, str2)<<'\n';

    return 0;
}
