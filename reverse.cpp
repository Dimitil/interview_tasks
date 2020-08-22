#include <iostream>

void reverse(char* str){
    if(!(*str)) return;
    char *end=str;

    while(*end){
    end++;
    }
    end--;

    while(str<end){
        std::swap(*end, *str);
        end--;
        str++;
    }
}

int main()
{
    char str[] = "Qwerty";
    reverse(str);
    std::cout<<str<<std::endl;
    return 0;
}
