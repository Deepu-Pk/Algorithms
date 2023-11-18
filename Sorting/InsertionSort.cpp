//----------------------------------------//
//     Insertion sort Algorithm           //
//----------------------------------------//

#include<iostream>
using namespace std;
void InsertionSort(int A[],int n){
    for(int i=1;i<n;i++){
        int x = A[i];
        int j = i-1;
        while(j>=0){
            if(x < A[j]){
                A[j+1] = A[j];
            }
            else{
                A[j+1] = x;
            }
            j--;
        }
        if(j == -1){
            A[0] = x;
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
    InsertionSort(A,10);
    cout<<"[INFO] Array after Insertion sort : ";
    for(int x : A){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}