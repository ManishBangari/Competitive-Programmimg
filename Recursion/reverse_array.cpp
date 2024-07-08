// Reverse an array using Recursion

#include<iostream>

using namespace std;

void reverseArray1(int arr[], int left, int right){
    if(left>=right) return;
    swap(arr[left], arr[right]);
    reverseArray1(arr, left+1, right-1);
}

void reverseArray2(int arr[], int i, int size){
    if(i>=(size/2)) return;
    swap(arr[i], arr[size-i-1]);
    reverseArray2(arr, i+1, size);
}

int main(){

    int size;
    cout<<"enter size of the array : ";
    cin>>size;

    int arr[size];
    cout<<"Enter elements in the array : ";
    for(int i=0;i<size;i++){    cin>>arr[i];    }

    cout<<"Array before Reversal : ";
    for(int i : arr)    cout<<i<<" ";
    
    int left=0, right=size-1;

    //reverseArray1(arr, left, right);

    reverseArray2(arr, 0, size);

    cout<<"\nArray after Reversal : ";
    for(int i : arr)    cout<<i<<" ";
    cout<<endl;

    return 0;
}