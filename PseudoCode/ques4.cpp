#include<iostream>
using namespace std;

int main() {
    int p=8 , q=6 , r=5;

    // here the loop is runnig for 5 to 8 so , it will execute 4 times
    for(r=5; r<=8; r++) {
        // Now in this line of code we are trying to assing value to  p but in condtion 4<q that is always true because inside condition we are updating q and updating p as well so every time p and q will update So, it not neccessary to calculate this p
        p = (6&3)+r;

        // here the given condition is true
        if(4<q) {

            // 1st iteration r=5
            // p = 3+r i.e 3+5 = 8

            // 2nd Iteration now r = 6 
            // 3+6 = 9

            // 3rd Iteration now r = 7
            // 3+7 = 10

            // 4th Iteration now r = 8
            // 3+8 = 11
            p = 3+r;

            // 1st iteration
            // q=6, 6+6=12

            // 2nd iteration
            // q=12, 12+12=24

            // 3rd iteration
            // q=24, 24+24=48

            // 4th iteration
            // q=48, 48+48=96
            q=q+q;
        }
    }

    // now after completing the loop we have p=11, q=96 so, p+q = 96+11 = 107
    cout<<p<<endl;
    cout<<q<<endl;
    cout<<p+q<<endl;

    return 0;
 }   