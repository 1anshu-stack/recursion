//if power is even=> a^b/2 * a^b/2.
//if power is odd=> a*(a^b/2 * a^b/2).
//this is the optmize way to find a power of an element.
#include<bits/stdc++.h>
using namespace std;

int power(int a, int b){
    
    if(b==0){
        return 1;
    }

    if(b==1){
        return a;
    }

    int ans = power(a, b/2);

    if(b%2==0){
        return ans*ans;
    }
    else{
        return a*(ans*ans);
    }
}

int main(){
     int a, b;
     cin>>a>>b;
     cout<<power(a,b);
    return 0;
}