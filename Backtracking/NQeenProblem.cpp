#include<iostream>
using namespace std;

bool canPlace(int board[][20], int n, int x, int y){
    // Check vertical positions
    for(int i=0;i<x;i++){
        if(board[i][y] == 1){
            return false;
        }
    }

    // Check left diagonal position
    int i = x;
    int j = y;
    while((i >= 0) and (j >= 0)){
        if(board[i][j] == 1){
            return false;
        }
        i--;
        j--;
    }

    // Check the right diagonal
    i = x;
    j = y;
    while((i >= 0) and (j > n)){
        if(board[i][j] == 1){
            return false;
        }
        i--;
        j++;
    }
    return true;
}

void printBoard(int board[][20], int n){
    for(int i=0;i<n;i++){
        for(int j =0;j<n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool solveNQeenProblem(int board[][20], int n, int i){
    if(i == n){
        printBoard(board,n);
        return true;
    }

    for(int j=0;j<n;j++){
        if(canPlace(board,n,i,j)){
            board[i][j] = 1;
            bool sucess = solveNQeenProblem(board,n,i+1);
            if(sucess){
                return true;
            }
            board[i][j] = 0;
        }
    }

    return false;
}

int main(){
    int board[20][20] = {0};
    int n;
    cout<<"[INFO] Enter the size of the board : ";
    cin>>n;
    bool sucess = solveNQeenProblem(board,n,0);
    return 0;
}