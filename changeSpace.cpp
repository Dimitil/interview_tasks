#include <iostream>
#include <string>
#include <ctype.h>


const std::string changer="%20";
const size_t size = 3;

void changeSpace(std::string &s){
    auto it = s.end()-1;

    while(isspace(*it)){
      s.erase(it);
      it--;
    }
   
   it=s.begin();
   while(it!=s.end()){
       if(isspace(*it)){
           s.erase(it);
           s.insert(it, changer.begin(), changer.end());
       }
       it++;
   }

}


int main()
{
    std::string str = "One two three   ";
    changeSpace(str);
    std::cout<<str;
}
