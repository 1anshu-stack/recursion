#include<iostream>
using namespace std;
int pow(int n){
    //base case
    if(n==1){
        return 2;
    }
    int a=pow(n-1);
    return 2*a;
}
int main(){
    int n;
    cin>>n;
    cout<<pow(n);
    return 0;
}