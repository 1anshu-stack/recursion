#include<iostream>
using namespace std;
bool binary(int arr[], int s, int e, int key){
     if(s>e){
         return false;
     }

     int mid = s+(e-s)/2;
     if(key==arr[mid]){
         return true;
     }
     else if(key>arr[mid]){
         return binary(arr, mid+1, e, key);
     }
     else{
         return binary(arr, s, mid-1, key);
     }
}
int main(){
    int arr[]={1,2,3,4,5,18};
    int key;
    cin>>key;
    int s=0;
    int e=sizeof(arr)/sizeof(arr[0]);
    cout<<binary(arr, s, e, key);
    return 0;
}