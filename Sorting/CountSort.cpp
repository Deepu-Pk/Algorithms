//----------------------------------------//
//         Count sort Algorithm           //
//----------------------------------------//

#include<iostream>
using namespace std;
void countSort(int A[],int n){
    int max_value = A[0];
    for(int i=0;i<n;i++){
        max_value = max_value < A[i] ? A[i] : max_value;
    }
    int count[max_value + 1] = {0}; 
    for(int i=0;i<n;i++){
        count[A[i]]++;
    }
    int i = 0;
    for(int k=0;k<=max_value;k++){
        while(count[k] >0){
            A[i] = k;
            i++;
            count[k]--;
        }
    }
}

int main(){
    int A[] = {10,9,8,7,6,5,4,3,2,1};
    cout<<"[INFO] Unsorted array : ";
    for(int x : A){
        cout<<x<<" ";
    }
    cout<<endl;
    int n = sizeof(A)/sizeof(int);
    countSort(A,n);
    cout<<"[INFO] Sorted array : ";
    for(int x : A){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}