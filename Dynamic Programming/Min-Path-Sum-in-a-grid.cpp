/* 
Find a path from the upper-left corner to the lower-right
corner of an n × n grid, such that we only move down and right. 
Each square contains a positive integer, and the path should be constructed so that the sum of
the values along the path is as large as possible.
*/

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main(){

    int n = 5, m = 5;
    vector<vector<int>> pathGrid = {{3,7,9,2,7},
                            {9,8,3,5,5},
                            {1,7,9,8,5},
                            {3,8,6,4,10},
                            {6,3,9,7,8}};

    vector<vector<int>> minPath(n+1, vector<int>(m+1,INT_MAX));
    minPath[0][1]=0, minPath[1][0]=0;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            minPath[i][j]=min(minPath[i-1][j],minPath[i][j-1])+pathGrid[i-1][j-1];
        }
    }

    cout<<"The Min Path Sum in a grid is : "<<minPath[n][m]<<"\n";
    
    cout<<"Visualization of the Min Path\n";

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<minPath[i][j]<<' ';
        }
        cout<<"\n";
    }

    return 0;
}
