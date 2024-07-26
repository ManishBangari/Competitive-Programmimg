// Basic Hash function

#include<iostream>
#include<vector>

using namespace std;

int main(){

    int size, query, querSize;
    
    cout<<"Enter the size of the array : ";
    cin>>size;

    vector<int> vec(size);
    cout<<"Enter elements in the array : ";

    for(int i=0;i<size;i++){    cin>>vec[i];    }

    cout<<"Enter the number of queries : ";
    cin>>querSize;
    cout<<endl;

    // precomputation
    vector<int> hash(13,0);
    for(int i=0;i<querSize;i++){
        hash[vec[i]]+=1;
    }

    for(int i=0;i<querSize;i++){
        cout<<"Enter the query : ";
        cin>>query;
        cout<<query<<" comes "<<hash[query]<<" times in the array.\n";
    }

    //  for(int i : hash)   cout<<i<<' ';

    return 0;
}