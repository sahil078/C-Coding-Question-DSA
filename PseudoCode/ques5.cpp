#include<iostream>
using namespace std;

int main() {
    int p=6 , q=4, r=6;

    for(r=3; r<=7; r++) {
        // here this condition is always true so it will return to for loop again and aggain untils the for condition is false and it will not execute any statement
        if((q+p+r) > (r+q)) {
            continue;
        }

        q = 5+r;
        p = p+p;
    }

    // after for loop values still remains same p=6, q=4 so, 6+4=10
    cout<<p+q<<endl;

    return 0;
}