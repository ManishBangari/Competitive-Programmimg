#include<iostream>
#include<cmath>

using namespace std;

# define ll long long

ll func(ll mid, ll n){
    ll ans=1;
    while(n>0){
        if(n%2==1){
            ans=ans*mid;
            n=n-1;
        }else{
            mid=mid*mid;
            n=n/2;
        }
    }

    return ans;
}

int main(){

    
    return 0;
}