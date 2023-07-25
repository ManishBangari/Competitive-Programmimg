/*
Author: Manish Singh
Date Created: 19 July 2023

This piece of code is to give the reader a general understanding of implementing comparator in C++. Enjoy :)
 
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define all(x) x.begin(), x.end()

static bool comp_intAsc(int &a, int &b){
	return a < b;
}

static bool comp_intDesc(int &a, int &b){
	return a > b;
}

static bool comp_vect(const vector <int> &a, const vector<int> &b){
        return a[1] > b[1];
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<int> vec={5,1,8,3,0,-1,-6,9};
    
    
    cout<<"1D Vector\n";
    cout<<"Without Sorting\n";
    for(int i : vec)	cout<<i<<' ';
    cout<<"\n";
    
    
    sort(all(vec),comp_intAsc);
    
    cout<<"With Comparator in ascending order\n";
    for(int i : vec)	cout<<i<<' ';
    cout<<"\n";
    
    
    sort(all(vec),comp_intDesc);
    
    cout<<"With Comparator in descending order\n";
    for(int i : vec)	cout<<i<<' ';
    cout<<"\n";
    
    // 2-D Vector
    // Sort the 2-D vector on the basis of the 2nd element in each 1-D vector in descending order
     
    vector<vector<int>> v = {{1,3},{2,2},{3,1}};
    
    
    sort(v.begin(), v.end(), comp_vect);
	
	cout<<"\nThe output after sorting the 2-D vector on the basis of the 2nd element in each 1-D vector in descending order is \n";
	
	for(vector<int> a : v){
    	cout<<a[0]<<' '<<a[1]<<"\n";    
    }
    
    return 0;
}

