// Program to find first occurrence and last occurrence of integer target in a vector or an array using binary search.

#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>

using namespace std;

int LastOccurrence(vector<int> &vec, int target, int size){
    int low=0, high=size-1, last=-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(vec[mid]==target){
            last=mid;
            low=mid+1;
        }
        else if(vec[mid]<target)    low=mid+1;   
        else    high=mid-1;
    }

    return last;
}

int FirstOccurrence(vector<int> &vec, int target, int size){
    int low=0, high=size-1, first=-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(vec[mid]==target){
            first=mid;
            high=mid-1;
        }
        else if(vec[mid]<target)    low=mid+1;   
        else    high=mid-1;
    }

    return first;
}

int main(){

    vector<int> vec{1,2,2,2,3,4,4,4,6,6,6,8,8,8,9,9};
    int target=0;
    int size=vec.size();

    cout<<"Enter the element to be searched : ";
    cin>>target;
    
    int firstOccur = FirstOccurrence(vec, target, size);
    int lastOccur = LastOccurrence(vec, target, size);

    cout<<"The element "<<target<<" first occurrence is at index : "<<firstOccur<<"\n";
    cout<<"The element "<<target<<" last occurrence is at index : "<<lastOccur<<"\n";

    cout<<"Number of occurrence of "<<target<<" is : ";
    (firstOccur==-1 && lastOccur==-1)?cout<<"0":cout<<lastOccur-firstOccur+1;
    cout<<endl;

    return 0;
}