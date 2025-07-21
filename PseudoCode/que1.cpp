#include<iostream>
using namespace std;

int main() {
    int p, q, r;
    p=7, q=4, r=5;

    // in this condition ()braces has the highest precedence so it will be executing first so we will get p+r i.e 12 and q-p i.e -3 and than we will perform the < operator between the value 12 < -3 which is false so we will be getting 0 and than we will solve this part i.e 0 || r<p in which relational operator < has the highest precedence that's why it will execute first i.e 5 < 7 which is true and return 1  now we will perform OR operator betwee 0 || 1 and it will return 1 i.e true 

    if((p+r)<(q-p) || r<p) {
        // here we are assigning q&p to r i.e 4&7 so in this case to perform AND operator first we need to convert the decimal into binary 4=100 and 7=111 now we will perform the AND operator and we will get 100 i.e 4
        // so r=4
        r = q&p;   // 4

        // Now in this statement we are assigning r = (r+3)&p first braces will execute that will give use 4+3 = 7 now we will perform the AND operator betweeen 7&7 that will return 7 
        r = (r+3)&p;   //7  now r will update to 7

    }

    // here we have p=7 q=4 and r=7 so after adding these three values we will get 18
    cout<<p+q+r<<endl;  // 18 
}