// Program to find the Nth root of M
// answer will be always between 1 to M and thus we can apply binary search on answers.

#include<iostream>
#include<cmath>

using namespace std;

#define ll long long

int func(int mid, int n, int m) {
        int ans = 1;
        for (int i = 1; i <= n; i++) {
            if (ans > m / mid) return 2;  // Early termination to avoid overflow
            ans *= mid;
        }
        if (ans == m) return 1;
        return 0;
}

ll NthRootOfM(ll n, ll m){
    ll low=1, high=m, ans=1;

    while(low<=high){
        ll mid=(low+high)/2;
        ll midN = func(mid, n, m);

        if(midN==1)   return mid; 
        else if(midN==0)    low=mid+1;
        else    high=mid-1;
    }

    return -1;
}

int main(){

    ll n=0, m=0;

    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter the element whose "<<n<<"th root is to be searched : ";
    cin>>m; 

    cout<<"The "<<n<<"th root of "<<m<<" is : "<<NthRootOfM(n,m);
    cout<<endl;

    return 0;
}