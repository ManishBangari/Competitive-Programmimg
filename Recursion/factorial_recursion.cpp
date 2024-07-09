#include<iostream>

using namespace std;
int fact=5;

void Parameterised_factorial(int i, int product){
    if(i==1){
        cout<<"The factorial of "<<fact<<" using Parameterised Recursion is : "<<product<<"\n";
        return;
    }
    else    return  Parameterised_factorial(i-1, i*product);
}

int Functional_factorial(int i){
    if(i==1)    return 1;
    else return i*Functional_factorial(i-1);
}

int main(){

    int product=1;
    Parameterised_factorial(fact, product);

    int result = Functional_factorial(fact);
    cout<<"The factorial of "<<fact<<" using Functional Recursion is : "<<result<<"\n";
    return 0;
}