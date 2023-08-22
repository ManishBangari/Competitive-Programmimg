/* 
Calculate the total number of ways to produce a sum x using the coins. 
For example, if coins = {1, 3, 4} and x = 5 
*/

#include <iostream>

using namespace std;

int main(){

    int n = 8, maxLen=0; 
    int subsequence[n] = {6,2,5,1,7,4,8,3};
    int length[n] ;

    for(int i=0; i<n; i++){
        length[i] = 1;
        for(int s=0; s<i; s++){
            if(subsequence[i] > subsequence[s]){
                length[i] = max(length[i], length[s]+1);
                maxLen=max(maxLen, length[i]);
            }
        }
    }

    cout<<"The longest increasing subsequence in this array of "<<n<<" elements : "<<maxLen<<"\n";

    for(int i : length)     cout<<i<<' ';
    cout<<endl;

    return 0;
}
