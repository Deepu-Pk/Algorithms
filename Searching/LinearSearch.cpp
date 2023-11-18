#include<iostream>
using namespace std;
int linearSearch(int A[],int n, int key){
    for(int i=0;i<n;i++){
        if(A[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int A[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(A)/sizeof(int);
    int key;
    cout<<"Enter the the key : ";
    cin>>key;
    int index = linearSearch(A,n,key);
    if(index == -1){
        cout<<"[INFO] "<<key<<" is not found in array "<<endl;
    }
    else{
        cout<<"[INFO] "<<key<<" is found at "<<index<<endl;
    }
    return 0;
}