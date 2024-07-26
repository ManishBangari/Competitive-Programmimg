#include<iostream>
#include<vector>

using namespace std;

// Print subsequence whose sum is K
void subsequenceSum(int index, vector<int> &vec, vector<int> subs, int sum, int subsSum, int size){
    if(index==size){
        if(sum==subsSum){
            for(int i : subs){  cout<<i<<' ';   }
            cout<<endl;
        }
        return;
    }

    subs.push_back(vec[index]);
    subsSum+=vec[index];
    subsequenceSum(index+1, vec, subs, sum, subsSum, size);

    subsSum-=vec[index];
    subs.pop_back();
    subsequenceSum(index+1, vec, subs, sum, subsSum, size);
}

// Print only 1 subsequence whose sum is K
bool any1subsequenceSum(int index, vector<int> &vec, vector<int> subs, int sum, int subsSum, int size){
    if(index==size){
        if(sum==subsSum){
            for(int i : subs){  cout<<i<<' ';   }
            cout<<endl;
            return true;
        }
        else return false;
    }

    subs.push_back(vec[index]);
    subsSum+=vec[index];
    if(any1subsequenceSum(index+1, vec, subs, sum, subsSum, size)==true)    return true;

    subsSum-=vec[index];
    subs.pop_back();
    if(any1subsequenceSum(index+1, vec, subs, sum, subsSum, size)==true)    return true;

    return false;
}

// Count the number of subsequence whose sum is K
int countSubsequence(int index, vector<int> &vec, vector<int> subs, int sum, int subsSum, int size){
    if(index==size){    return (sum==subsSum)?1:0;  }

    subs.push_back(vec[index]);
    subsSum+=vec[index];
    int leftCount = countSubsequence(index+1, vec, subs, sum, subsSum, size);

    subsSum-=vec[index];
    subs.pop_back();
    int rightCount = countSubsequence(index+1, vec, subs, sum, subsSum, size);

    return leftCount+rightCount;
}

int main(){

    vector<int> vec={1,2,1};
    vector<int> subs;
    int sum=2, size=vec.size();

    cout<<"The subsequences are : ";
    subsequenceSum(0, vec, subs, sum, 0, size);

    //  any1subsequenceSum(0, vec, subs, sum, 0, size);

    cout<<"The number of subsequences whose sum is "<<sum<<" are : "<<countSubsequence(0, vec, subs, sum, 0, size)<<endl;

    return 0;
}