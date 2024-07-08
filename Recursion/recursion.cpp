// Parameterised and Functional Recursion

#include<iostream>

using namespace std;

void Parameterised(int i, int sum){
    if(i<1){
        cout<<"The sum using Parameterised Recursion is : "<<sum<<"\n";
        return;
    } 
    else Parameterised(i-1,sum+i);
}

int Functional(int i){
    if(i==0)    return 0; 
    else return i+Functional(i-1);
}

int main(){

    Parameterised(5,0);

    int result = Functional(5);
    cout<<"The sum using Functional Recursion is : "<<result<<"\n";

    return 0;
}