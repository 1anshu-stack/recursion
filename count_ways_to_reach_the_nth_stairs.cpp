#include<iostream>
using namespace std;

int count(int nStairs){
    //base case for -ve stairs.
    if(nStairs < 0){
        return 0;
    }

    //base case for jump on a same stairs.
    if(nStairs == 0){
        return 1;
    }

    int moveOneStep = count(nStairs-1);
    int moveTwoStep = count(nStairs-2);

    return (moveOneStep + moveTwoStep);
}

int main(){
    int nStairs;
    cin>>nStairs;
    cout<<count(nStairs);
    return 0;
}