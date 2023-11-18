//----------------------------------------//
//        Bubble sort Algorithm           //
//----------------------------------------//

#include<iostream>
using namespace std;

void bubbleSort(int A[],int n){
    for(int i=0;i<n-1;i++){
        int flag = 0;
        for(int j=0;j<n-1-i;j++){
            if(A[j] > A[j+1]){
                flag = 1;
                swap(A[j],A[j+1]);
            }
        }
        if(flag == 0){
            break;
        }
    }
}

int main(){
    int A[] = {10,9,8,7,6,5,4,3,2,1};
    cout<<"[INFO] Input array : ";
    for(int x : A){
        cout<<x<<" ";
    }
    cout<<endl;
    bubbleSort(A,10);
    cout<<"[INFO] Array after bubble sort : ";
    for(int x : A){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}