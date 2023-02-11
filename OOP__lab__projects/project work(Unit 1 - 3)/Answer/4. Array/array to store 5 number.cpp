//program that uses an array to store 5 integers, and then outputs the sum of those integers.

#include<iostream>

using namespace std;

int main(){

    int i[4],j=1,sumOfNumbersInArray=0;

    cout<<"Enter 5 numbers"<<endl<<endl;

    while(j<6){
        cout<<j<<"/5 : ";
        cin>>i[j];
        j+=1;
    }


    for(int k=1;k<j;k++){
        sumOfNumbersInArray += i[k];
    }

    cout<<endl<<"The sum of those integers are: "<<sumOfNumbersInArray;

    return 0;
}

