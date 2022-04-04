#include<iostream>
using namespace std;

bool pali(string str, int i, int j){

     if(i>j){
         return true;
     }

     if(str[i]!=str[j]){
         return false;
     }
     else{
         return pali(str, i++, j--);
     }
}

//i and n-i-1 we can use this also in place of i.

int main(){ 
    string str="abba";
    int len=str.length();
    bool ans=pali(str, 0, len-1);
    if(ans){
        cout<<"its a palindrome";
    }
    else{
        cout<<"not a palindrome";
    }
    return 0;
}