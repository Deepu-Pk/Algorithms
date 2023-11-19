#include<iostream>
using namespace std;
int partition(int A[],int s, int e){
    int pivot = e;
    int i = s-1;
    for(int j=s;j<pivot;j++){
        if(A[j] < A[pivot]){
            i++;
            swap(A[i],A[j]);
        }
    }
    i++;
    swap(A[i],A[pivot]);
    return i;
}

void quickSort(int A[],int s, int e){
    if(s >= e){
        return;
    }
    int p = partition(A,s,e);
    quickSort(A,s,p-1);
    quickSort(A,p+1,e);
}

int main(){
    int A[] = {10,9,8,7,6,5,4,3,2,1};
    cout<<"[INFO] Array : ";
    for(int x: A){
        cout<<x<<" ";
    }
    cout<<endl;
    quickSort(A,0,9);
    cout<<"[INFO] Sortted array : ";
    for(int x : A){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}