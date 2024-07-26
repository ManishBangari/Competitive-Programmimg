// Program to find Square root of integer N
// answer will be always between 1 to N and thus we can apply binary search on answers.

#include<iostream>

using namespace std;

int SquareRootN(int n){
    int low=1, high=n, ans=1;

    while(low<=high){
        long long mid=(low+high)/2;

        if(mid*mid<=n){
            ans=mid;
            low=mid+1;
        } 
        else    high=mid-1;
    }

    return ans;
}

int main(){

    int n=0;

    cout<<"Enter the element whose square root is to be searched : ";
    cin>>n;

    cout<<"The Square root is : "<<SquareRootN(n);
    
    cout<<endl;

    return 0;
}