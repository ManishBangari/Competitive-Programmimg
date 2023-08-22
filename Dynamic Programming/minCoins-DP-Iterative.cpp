#include <iostream>
#include <vector>
#include <climits>
#include <chrono>
#include <sys/resource.h>

using namespace std;

int main(){

    int sum=4000;

    vector<int> coins={1,3,4,5,11};
    vector<int> value(sum+1, INT_MAX);

    value[0]=0;

    for(int i=1;i<=sum;i++){
        for(int c : coins){
            if(i-c >= 0)   value[i]=min(value[i], value[i-c]+1);
        }
    }

    cout<<"Minimum Coins Required using Iterative-DP : "<<value[sum]<<"\n";

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
