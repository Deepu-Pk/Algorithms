#include<iostream>
using namespace std;
int binarySearch(int A[],int n,int key){
    int s = 0;
    int e = n-1;
    while(s<=e){
        int mid = (s+e)/2;
        if(A[mid] == key){
            return mid;
        }
        else if(A[mid] > key){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    return -1;
}

int main(){
    int A[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(A)/sizeof(int);
    int key;
    cout<<"[INFO] Enter the key to search : ";
    cin>>key;
    int index = binarySearch(A,n,key);
    if(index == -1){
        cout<<"[INFO] "<<key<<" is not found in array "<<endl;
        return 0;
    }
    cout<<"[INFO] "<<key<<" is found at index "<<index<<endl;
    return 0;
}