#include <iostream>
#include <vector>
#include <climits>
#include <chrono>
#include <sys/resource.h>

using namespace std;

vector<int> coins={1,3,4};

int minCoins(int x){

    if(x <= 0)     return 0;  

    int best=INT_MAX;  

    for(int c : coins) {
        int result = minCoins(x - c);
        if (result != INT_MAX) {
            best = min(best, result + 1);
        }
    }

    return best;
}

int main(){
    
    int sum=10;

    cout<<"Minimum Coins Required using Recursion : "<<minCoins(sum)<<"\n";

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
