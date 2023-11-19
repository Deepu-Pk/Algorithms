// ---------------------------------------------------------//
// [Q] Given mxn fris, find the number of os ways to reach the bottom right starting from top left. At each 
//    you can move right or down
#include<iostream>
using namespace std;
int gridWays(int i, int j, int m, int n){
    if((i == m-1) and (j == n-1)){
        return 1;
    }
    if((i >= m)  or (j >= n)){
        return 0;
    }

    return gridWays(i+1,j,m,n) + gridWays(i,j+1,m,n);
}

int main(){
    int m,n;
    cout<<"[INFO] Enter the size eof the grid : ";
    cin>>m>>n;
    int ans = gridWays(0,0,m,n);
    cout<<"[INFO] Number of possible ways : "<<ans<<endl;
    return 0;
}