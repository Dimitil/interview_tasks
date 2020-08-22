#include <fstream>
#include <iostream>
#include <string>

void printLast10Lines(const char* fileName){
    std::ifstream file(fileName);
    const int K = 10;
    std::string L[K];
    int size=0;

    while(file.peek()!=EOF){
        getline(file, L[size%K]);
        size++;
    }

    int start = size > K ? (size % K) : 0;

    int count = std::min(K, size);

    for(int i=0; i<count; i++){
        std::cout<<L[(start+i)%K]<<std::endl;
    }
}


int main(int argc, char *argv[])
{
    if(argc!=2) return 1;

    printLast10Lines(argv[1]);

    return 0;
}
