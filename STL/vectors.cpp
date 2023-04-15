/* Date Created : 02 February 2022
Creator : Manish Bangari */

/* 
    Basic vector functionalities. 

    assign() - It assigns new value to the vector elements by replacing old ones.
    push_back() - It push the elements into a vector from the back.
    pop_back() - It is used to pop or remove elements from a vector from the back.
    insert() - It inserts new elements before the element at the specified position.
    erase() - It is used to remove elements from a container from the specified position or range.
    swap() - It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
    clear() - It is used to remove all the elements of the vector container.
    emplace() - It extends the container by inserting new element at position.
    emplace_back() - It is used to insert a new element into the vector container, the new element is added to the end of the vector.       
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void displayVector(vector<int> vec){                                // Print the elements using iterator

    cout<<"The vector is : ";
    for(auto it=vec.begin(); it!=vec.end(); it++)     
    cout<<*it<<" ";

    cout<<endl;
    return;
}

int main(){
    
    vector<int> v={2,4,1,5,7,9};                                    // Insert the elements

    displayVector(v);

    if(v.empty()!=true) cout<<"Vector is not empty\n";            // is vector empty??
    cout<<"The element at front is : "<<v.front()<<" and the element at the end is : "<<v.back()<<"\n";
    cout<<"element at 3rd position in the vector is : "<<v.at(3)<<"\n";

    v.assign(3,3);
    v.push_back(9);
    
    displayVector(v);
     
    v.pop_back();
    v.insert(v.end(),7);
    v.erase(v.begin()); 

    displayVector(v);

    v.emplace(v.begin(),11);
    v.emplace_back(12);

    displayVector(v);

    sort(v.begin(),v.end());                                        //      Sort the vector

    displayVector(v);

    
    vector<vector<int>> vec;                                        //      Vector of vectors
    int a,n;

    cout<<"enter the size of the vector of vectors : ";
    cin>>n;

    for(int i=0;i<n;i++){
        vector<int> v;
    for(int j=0;j<n+1;j++){
        cin>>a;
        v.push_back(a);
    }
        vec.push_back(v);
    }

    cout<<"The vector is : ";  
    for(int i=0;i<vec.size();i++){
    for(int j=0;j<vec[i].size();j++)    cout<<vec[i][j]<<" ";
    cout<<"\n";
    }


    vector<string> vecString;                                       //      Vector of strings 
    string x;

    cout<<"enter the size of the string vector : ";
    cin>>n;

    for(auto i=0;i<n;i++){
        cin>>x;
        vecString.push_back(x);
    }

    cout<<"The vector is : \n"; 
    for(auto a:vecString)   cout<<a<<" ";

    cout<<endl;
    return 0;
}

    