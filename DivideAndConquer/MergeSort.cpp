#include<iostream>
using namespace std;
void merge(int A[],int s, int e){
    int mid = (s+e)/2;
    int temp[e+1];
    int k = 0;
    int i = s;
    int j = mid+1;
    while((i<=mid) and (j <= e)){
        if(A[i] < A[j]){
            temp[k++] = A[i++];
        }
        else{
            temp[k++] = A[j++];
        }
    }
    for(;i<=mid;i++){
        temp[k++] = A[i];
    }
    for(;j<=e;j++){
        temp[k++] = A[j];
    }
    k = 0;
    for(int i=s;i<=e;i++){
        A[i] = temp[k++];
    }

}
void mergeSort(int A[],int s,int e){
    if(s>=e){
        return;
    }
    int mid = (s+e)/2;
    mergeSort(A,s,mid);
    mergeSort(A,mid+1,e);
    merge(A,s,e);
}

int main(){
    int A[] = {10,9,8,7,6,5,4,3,2,1};
    int n = sizeof(A)/sizeof(int);
    cout<<"[INFO] The array : ";
    for(int x : A){
        cout<<x<<" ";
    }
    cout<<endl;
    mergeSort(A,0,9);
    cout<<"[INFO] The sorted array : ";
    for(int x : A){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}