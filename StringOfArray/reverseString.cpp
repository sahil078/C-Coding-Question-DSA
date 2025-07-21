// reverse the string 
#include<iostream>
using namespace std;

// function to get the length of string
int getLen(char name[]){
    int len = 0;
    while(name[len] != '\0'){
        len++;
    }
    return len;
}

// function to reverse the string
void reverseString(char name[], int n) {
    int start = 0;
    int end = n-1;

    while(start < end){
        swap(name[start] , name[end]);
        start++;
        end--;
    }
}

int main(){
    char name[20];
    cout << "Enter your name: ";
    cin>>name;

    int length = getLen(name);
    cout<<"The length of name is "<<length<<endl;

    cout<<"Reversed Name is : ";
    reverseString(name, length);
    cout<<name;
}