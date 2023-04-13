/* Fundamentals of Pointers */

#include<iostream>
#include<vector>
#include<algorithm>


void func(int *ptr,int a){
    int *ptra=NULL;
    std::cout<<&ptra<<" "<<&a<<"\n";
    if(*ptr==a)
    ptra=ptr;
    std::cout<<*ptr<<" "<<&ptr<<" "<<ptr<<"\n";
    std::cout<<*ptra<<" "<<&ptra<<" "<<ptra<<"\n";

    return;
}

void swap(int a,int c){                             /* Swapping using duplicate values i.e. shallow copy */
    int temp;
    temp=a;
    a=c;
    c=temp;
    std::cout<<"a = "<<a<<" c = "<<c<<"\n";

    return ;
}

void swap_ref(int &a,int &c){                       /* Swapping using references */
    int temp;
    temp=a;
    a=c;
    c=temp;
    std::cout<<"a = "<<a<<" c = "<<c<<"\n";

    return ;
}

void swap_ref_pointer(int *a,int *c){               /* Swapping using pointers */ 
    *a=*a+1;
    *c=*c+1;
    std::cout<<"a = "<<*a<<" c = "<<*c<<"\n";

    return ;
}

int main(){

    int a=10,c=20;
    float b=3.1415926;
    int *ptr1=&a;
    float *ptr2=&b;

    std::cout<<"Original Values : "<<"a = "<<a<<" c = "<<c<<"\n";


    swap(a,c);
    std::cout<<"a = "<<a<<" c = "<<c<<"\n";


    swap_ref(a,c);
    std::cout<<"a = "<<a<<" c = "<<c<<"\n";


    a=10,c=20;                  
    std::cout<<"Changed Values : "<<"a = "<<a<<" c = "<<c<<"\n";


    swap_ref_pointer(&a,&c);
    std::cout<<"a = "<<a<<" c = "<<c<<"\n";

    std::cout<<a<<" "<<ptr1<<"\n";
    std::cout<<b<<" "<<*ptr2<<"\n";


    std::cout<<"Pointers in arrays\n";
    func(ptr1,a);
    int arr[3]={1,2,3};
    int *p=&arr[0];
    std::cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<"\n";


    std::cout<<"Pointers in strings\n";
    std::string s="hello world";
    std::string *str=&s;
    std::cout<<s<<" "<<*str<<"\n"; 

    return 0;
}