// Lower bound is the first element NOT LESS than val

#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>

using namespace std;

int FindLowerbound(vector<int> &vec, int target){
    int low=0, high=vec.size()-1, ans=high+1;

    while(low<=high){
        int mid=(low+high)/2;

        if(vec[mid]>=target){   ans=mid;  high=mid-1;   }
        else    low=mid+1;
    }

    return ans;
}

int main(){

    vector<int> vec{1,2,2,2,3,4,4,4,6,6,6,8,8,8,9,9};
    int target=0;

    cout<<"Enter the element to be searched : ";
    cin>>target;

    std::vector<int>::iterator lb = lower_bound(vec.begin(), vec.end(), target);
    cout<<"Using in-built lower-bound function : "<<lb-vec.begin()<<"\n";

    cout<<"The element is at index : "<<FindLowerbound(vec, target)<<"\n";

    // for(int i : vec){
    //     std::vector<int>::iterator lb = lower_bound(vec.begin(), vec.end(), i);

    //     if(lb-vec.begin()==FindLowerbound(vec, i))  cout<<"correct\n";
    //     else    cout<<"incorrect\n";
    // }

    return 0;
}


