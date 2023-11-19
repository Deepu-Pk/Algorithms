#include<iostream>
using namespace std;
int factorial(int n){
    if((n == 0) or (n == 1)){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
    int n;
    cout<<"[INFO] Enter the number : ";
    cin>>n;
    cout<<"[INFO] Factorial of "<<n<<" is "<<factorial(n)<<endl;
    return 0;
}