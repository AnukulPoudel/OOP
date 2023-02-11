//program that uses while loop to output the numbers from 1 to 10.

#include<iostream>

using namespace std;

int main(){

    int i;
    while(i<11){
        cout<<i<<endl;  //endl breaks line and flushes unlike '\n'
        i+=1;  //increases the value in variable 'i' by 1, same as i++ or ++i
    }
    return 0;
}
