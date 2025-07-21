// write a program to exchange the fist and last charecter in the given string and return the resutltant charecter

#include<iostream>
using namespace std;

string test(string str){
    if(str.length() > 1){
        return str.substr(str.length()-1) + str.substr(1 , str.length() - 2) + str.substr(0 , 1);
    }
    else{
        return str;
    }
}
int main(){
    cout<< test("abcdef") << endl;
    cout<< test("a") << endl;
    cout<< test("xy") << endl;

    return 0;

}