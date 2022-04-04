#include<bits/stdc++.h>
using namespace std;

//METHOD 1;
// void revstr(string str, int len){
//      if(len==0){
//          return;
//      }
//      cout<<str[len-1];
//      revstr(str, len-1);
// }

//METHOD 2;
// void swap(int &a, int &b){
//     int temp=a;
//     a=b;
//     b=temp;
// }

// void revstr1(string &str, int i, int j){
//      if(i>j){
//          return;
//      }
//      swap(str[i], str[j]);
//      i++;
//      j--;
//      revstr1(str, i, j);
// }

// or use i as a single pointer i and n-i-1;

int main(){
    string str;
    cin>>str;
    int len=str.length();
    //revstr(str, len);
    //revstr1(str, 0, len-1);
    cout<<str;
    return 0;
}