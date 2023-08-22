#include<iostream>
#include<vector>
#include<climits>
#include <chrono>
#include <sys/resource.h>

using namespace std;

int sum=4000;

vector<int> coins={1,3,4,5,11};
vector<bool> ready(sum+1, false);
vector<int> value(sum+1, 0);

int minCoins(int x){

    if(x <= 0)     return 0;  

    if(ready[x])    return value[x];  
    int best = INT_MAX;

    for(int c : coins)  best = min(best, minCoins(x - c) + 1);
    
    ready[x]=true;
    value[x]=best;

    return best;
}

int main(){

    cout<<"Minimum Coins Required using Recursion-DP : "<<minCoins(sum)<<"\n";

    auto start_time = chrono::high_resolution_clock::now();
    auto end_time = chrono::high_resolution_clock::now();

    // Calculate duration
    auto duration = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

    cout << "Time taken by function: " << duration << " microseconds" << endl;

    // Get stack space used
    rusage usage;
    getrusage(RUSAGE_SELF, &usage);
    cout << "Stack space used: " << usage.ru_maxrss << " KB\n";

    return 0;
}
