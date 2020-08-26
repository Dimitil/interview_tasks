#include <iostream>
#include <string>


const std::string changer="%20";

void changeSpace(std::string &s){
    auto it = s.end()-1;

    while(' '==(*it)){//trim
      s.erase(it);
      it--;
    }
   
   it=s.begin();
   while(it!=s.end()){
       if(' '==(*it)){
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
