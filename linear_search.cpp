#include<iostream>
using namespace std;

bool linear_sear(int arr[], int size, int key){

    if(size==0){
        return false;
    }

    if(arr[0]==key){
        return true;
    }
    else{
        return linear_sear(arr+1, size-1, key);
    }
}

int main(){
    int arr[]={3,5,2,6,8,9};
    int key;
    cin>>key;
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<linear_sear(arr, size, key);
    return 0;
}