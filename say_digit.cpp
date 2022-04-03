#include<iostream>
using namespace std;


void say_digit(int n, string arr[]){
    //base case
    if(n==0){
        return;
    }

    //processing
    int last_digit = n%10;
    n/=10;

    //recursive call
    say_digit(n, arr);

    //printing
    cout<<arr[last_digit]<<" ";
}

int main(){
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cin>>n;
    say_digit(n, arr);
    return 0;
}