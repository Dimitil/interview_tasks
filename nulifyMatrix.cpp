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

void nulifyMatrix(std::vector<std::vector<int>> &vec){//matrix[n][n]
    bool *rowAr = new bool[vec.size()];
    bool *colAr = new bool[vec[0].size()];

    for(int i=0; i<vec.size(); i++){
        for(int j=0; j<vec[i].size(); j++){
            if(vec[i][j]==0){
                rowAr[i]=true;
                colAr[j]=true;
            }
        }
    }

    for(int i=0; i<vec.size(); i++){
        if (rowAr[i]==true) {
            for(int j=0; j<vec[i].size(); j++){
                vec[i][j]=0;
            }
        }
    }

    for(int i=0; i<vec[0].size(); i++)
    {
        if(colAr[i]==true){
            for(int j=0; j<vec.size(); j++)
            {
                vec[j][i]=0;
            }
        }
    }
}


int main(){

    std::vector <std::vector<int>> Matrix={
        {0,1,2,3},
        {3,4,0,6},
        {4,7,8,9},
        {1,4,6,7}
    };

    std::cout<<"\nbefore \n";

    printMatrix(Matrix);

    nulifyMatrix(Matrix);

    std::cout<<"\nafter \n";

    printMatrix(Matrix);

    return 0;
}
