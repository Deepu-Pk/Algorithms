#include<iostream>
using namespace std;

bool canPlace(int Matrix[][9],int i,int j,int no){
    // Check vertical and horizontal
    for(int k=0;k<9;k++){
        if((Matrix[k][j] == no) or (Matrix[i][k] == no)){
            return false;
        }
    }

    // Checking 3x3 grid
    int si = (i/3) * 3;
    int sj = (j/3) * 3;
    int ei = si + 3;
    int ej =  sj + 3;
    for(i=si;i<ei;i++){
        for(j=sj;j<ej;j++){
            if(Matrix[i][j] == no){
                return false;
            }
        }
    }
    return true;
}

void printMatrix(int Matrix[][9]){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<Matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

bool solveSudoku(int Matrix[][9],int i,int j){
    // Base case
    if(i == 9){
        printMatrix(Matrix);
        return true;
    }
    if(j == 9){
        return solveSudoku(Matrix,i+1,0);
    }
    if(Matrix[i][j] != 0){
        return solveSudoku(Matrix,i,j+1);
    }

    // Recursive case
    for(int no=1;no<=9;no++){
        if(canPlace(Matrix,i,j,no)){
            Matrix[i][j] = no;
            bool sucess = solveSudoku(Matrix,i,j+1);
            if(sucess){
                return true;
            }
        }
    }
    Matrix[i][j] = 0;
    return false;
}

int main(){
	int mat[9][9] =
        {{5,3,0,0,7,0,0,0,0},
        {6,0,0,1,9,5,0,0,0},
        {0,9,8,0,0,0,0,6,0},
        {8,0,0,0,6,0,0,0,3},
        {4,0,0,8,0,3,0,0,1},
        {7,0,0,0,2,0,0,0,6},
        {0,6,0,0,0,0,2,8,0},
        {0,0,0,4,1,9,0,0,5},
        {0,0,0,0,8,0,0,7,9}};

    bool sucess = solveSudoku(mat,0,0);
    return 0;
}