// Print all the subset sum in a given array in ascending order

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void subsetSum(int index, vector<int>& vec, vector<int>& sum, int subsSum){
    if(index==vec.size()){
        sum.push_back(subsSum);
        return;
    }

    subsSum+=vec[index];
    subsetSum(index+1, vec, sum, subsSum);

    subsSum-=vec[index];
    subsetSum(index+1, vec, sum, subsSum);
}

int main(){

    vector<int> vec={3,2,1,7,8};
    vector<int> sum;

    subsetSum(0, vec, sum, 0);

    sort(sum.begin(), sum.end());

    cout<<"The subset sum in ascending order is : ";
    for(int i : sum)    cout<<i<<' ';
    cout<<endl;

    return 0;
}