#include<iostream>
#include <cctype>
using namespace std;

void toSnakeCase(string camelCase){

    int camelCaseWordLength = camelCase.length();

    // loop through each letter in the string and look for the capital letters,
    for(int i=0;i<=camelCaseWordLength;i++){

        //  if capital exists then print '_' then lowercase the capital letter and print it as well
        if(isupper(camelCase[i])){
            cout<<"_";
            char lowered = tolower(camelCase[i]);  //had to add this because when tried to print directly like cout<<tolower(camelCase[i]);
                                                   //for some reason it displayed asci numbers instead of characters
            cout<<lowered;
        }
        else{ //if capital does not exists then print the character the way it is
            cout<<camelCase[i];
        }
    }

}

int main(){

    string camelCase;
    cout<<"Enter a camel case word(eg. camelCase, helloWorld, etc..): ";
    cin>>camelCase;

    cout<<"The snake_case is : ";
    toSnakeCase(camelCase);

    return 0;
}
