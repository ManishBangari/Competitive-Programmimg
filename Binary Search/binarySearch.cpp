#include<iostream>
#include<vector>

using namespace std;

int binarySearch(vector<int> &vec, int target){
    int low=0, high=vec.size()-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(vec[mid]==target)    return mid;
        else{

        if(vec[mid]>target) high=mid-1;
        else    low=mid+1;
        }
    }

    return -1;
}

int main(){

    vector<int> vec = {1,2,4,5,6,7,8,10,11};
    int target=0;

    cout<<"Enter the element to be searched : ";
    cin>>target;

    cout<<"The element is at index : "<<binarySearch(vec, target)<<"\n";

    //for(int i : vec)    cout<<"The element "<<i<<" is at index : "<<binarySearch(vec, i)<<"\n";

    return 0;
}