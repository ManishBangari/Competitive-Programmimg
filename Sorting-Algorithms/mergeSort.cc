/* 
MergeSort - Divide and Conquer Paradigm 
Time Complexity = O(nlogn)	{Best Case, Average Case and Worst Case}
Space Complexity = O(n)
*/

#include<iostream>
#include<vector>

void merge(std::vector<int> &vec, int start, int end){

	int left = start;
	int mid = start + (end - start)/2;
	int right = mid+1;

	std::vector<int> temp;			// temp vector

	while(left <= mid && right <= end){				// Sorting the vector.
		if(vec[left] < vec[right]){	temp.push_back(vec[left]);	++left;		}
		else{	temp.push_back(vec[right]);	++right;		}
	}

	while (left <= mid)		temp.push_back(vec[left++]);		// remaining elements from first half. 

	while (right <= end)	temp.push_back(vec[right++]);		// remaining elements from second half. 
	
	int k=0;
	for(int index=start; index<=end; index++)	vec[index] = temp[k++];		//	putting elements in vector vec.

	return;
}

void mergeSort(std::vector<int> &vec, int start, int end){ 

    if(start >= end)    return;

    int mid = start + (end - start)/2;
    mergeSort(vec, start, mid);             //  Left part of the vector.
    mergeSort(vec, mid+1, end);             //  Right part of the vector.

    return merge(vec, start, end);          //  Merge the array.
}

int main(){

    std::vector<int> vec = {3,5,1,6,29,12,4,9};     // Initialize the vector.
    
    mergeSort(vec,0,vec.size()-1);					// Merge Sort
    
    for(int i : vec)  std::cout<<i<<" ";
	std::cout<<std::endl;
    
    return 0;
}
