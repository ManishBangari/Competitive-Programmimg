// Check for Palindrome

#include<iostream>
#include<string>

using namespace std;

bool checkPalindrome(string str, int i, int size){
    if(i>=(size/2))   return true;
    if(str[i]!=str[size-i-1])   return false;
    else return checkPalindrome(str, i+1, size);
}

int main(){

    string str;
    cout<<"enter a string : ";
    cin>>str;

    int size=str.length();

    cout<<"The string "<<str; 
    checkPalindrome(str, 0, size)?cout<<" is a Palindrome":cout<<" is not a Palindrome";
    
    return 0;
}