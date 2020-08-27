#include <iostream>
#include <vector>

void printMatrix(std::vector<std::vector<int>> const vec){
    for(int i=0; i<vec.size(); i++){
        for(int j=0; j<vec[i].size(); j++){
            std::cout<<vec[i][j]<<' ';
        }
    std::cout<<'\n';
    }
}


void rotateMatrix(std::vector<std::vector<int>> &vec){//Matrix[n][n]
    for(int layer=0; layer<vec.size()/2; layer++){
    int first=0;
    int last=vec.size()-1-layer;
        for(int i=first; i<last; i++){
            int offset=i-first;
            
            int temp=vec[first][i];//save top

            vec[first][i]=vec[last-offset][first];//left->top
            vec[last-offset][first]=vec[last][last-offset];//bot->left
            vec[last][last-offset]=vec[i][last];//right->bot
            vec[i][last]=temp;//top->right
        }
    }
}



int main(){


    std::vector <std::vector<int>> Matrix={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    
    std::cout<<"\nbefore rotate\n";

    printMatrix(Matrix);
    
    rotateMatrix(Matrix);

    std::cout<<"\nafter rotate\n";

    printMatrix(Matrix);
    
    return 0;
}
