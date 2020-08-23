#include <iostream>
#include <string>

bool checkUnique(std::string str){
    if(str.size()>128) return false;
    
    bool chSet[128]={0};

    for(int i=0; i<str.size(); i++){
        int val=str[i];

        if(chSet[val]) {
            return false;
        }
        
        chSet[val]=true;
    }
    return true;
}



int main()
{
    std::string str("Qwertye");
    std::cout<<checkUnique(str);

}
