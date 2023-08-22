/* 
Calculate the total number of ways to produce a sum x using the coins. 
For example, if coins = {1, 3, 4} and x = 5 
*/

#include <iostream>

using namespace std;

const int MOD = 1e9+7;

int main(){

    int sum = 5;

    int coins[3] = {1,3,4};
    int count[sum+1] = {0};

    count[0]=1;

    for(int i=1; i<=sum; i++){
        for(int c : coins){
            if(i-c >= 0){
                count[i]+= count[i-c];
                count[i] %= MOD;
            }
        }
    }

    cout<<"Counting the number of solutions(ways) using Iterative-DP : "<<count[sum]<<"\n";

    return 0;
}
