#include<iostream>
using namespace std;

int main() {
    int a=2, b=40, c=0;

    // in this statement we will get c=0 s0 , 0+2 = 2 and b will update to 2.
    b = c+2;

    // here in if condition we are passing a i.e 2 which is a truthy value so it will be true and we will enter to if condition

    if(a) {
        // Here we are updating the c with 1 so c will contain 1
        c=1;
    }

    // after executing if we have b = 2 and c = 1 so a-b+c i.e 2-2+1 so the output will be 1
    cout<<a-b+c<<endl;
}