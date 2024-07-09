#include<iostream>

using namespace std;

int fibonacci(int number){
    if(number<=1)   return number;
    else return fibonacci(number-2)+fibonacci(number-1);
}

int main(){

    int number;
    cout<<"Enter a number : ";
    cin>>number;

    cout<<number<<"th Fibonacci number is : "<<fibonacci(number)<<endl;
    return 0;
}