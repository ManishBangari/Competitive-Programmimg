// Print all the subsequences of the array
// For example if the array is [3,1,2], then the subsequences are
// {[3, 1, 2], [3, 1], [3, 2], [3], [1, 2], [1], [2], []}

#include<iostream>
#include<vector>

using namespace std;

void printSubsequences(int index, vector<int> &vec, vector<int> subs, int size){
    if(index>=size){
        for(int i : subs){  cout<<i<<' ';   }
        cout<<endl;
        return ;
    }
    subs.push_back(vec[index]);
    printSubsequences(index+1, vec, subs, size);
    subs.pop_back();
    printSubsequences(index+1, vec, subs, size);
}

int main(){

    vector<int> vec={3,1,2,7,5};
    vector<int> subs;
    int size=vec.size();

    printSubsequences(0, vec, subs, size);

    return 0;
}