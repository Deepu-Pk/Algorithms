#include<iostream>
using namespace std;
void selctionSort(int A[],int n){
    for(int i= 0;i<n;i++){
        int index = i;
        for(int j=i;j<n;j++){
            if(A[index] > A[j]){
                index = j;
            }
        }
        swap(A[i],A[index]);
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
    selctionSort(A,n);
    cout<<"[INFO] Sorted array : ";
    for(int x : A){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}