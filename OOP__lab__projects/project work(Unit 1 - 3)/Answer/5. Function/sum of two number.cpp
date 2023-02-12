//a program that defines a function that takes two integers as arguments and returns their sum

#include<iostream>
using namespace std;

int sum(int a,int b){
    return a+b;
}

int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"The sum is : "<<sum(a,b);
    return 0;
}
