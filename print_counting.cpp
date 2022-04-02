#include<iostream>
using namespace std;

//head recursion
void count(int n){
    //base condition
    if(n==0){
       cout<<n<<" ";
       return;
    }
    cout<<n<<" ";
    count(n-1);
}

//tail recursion
void count1(int n){
    //base condition
    if(n==0){
        cout<<n<<" ";
       return;
    }
    count1(n-1);
    cout<<n<<" ";
}

int main(){
    int n;
    cin>>n;
    count(n);
    cout<<endl;
    count1(n);
    return 0;
}