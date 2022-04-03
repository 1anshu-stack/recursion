#include<iostream>
using namespace std;
int fibo(int n){
    //base case
    if(n==0 || n==1){
        return n;
    }
    int first=fibo(n-1);
    int second=fibo(n-2);
    return (first+second);
}

int main(){
    int n;
    cin>>n;
    cout<<fibo(n);
    return 0;
}