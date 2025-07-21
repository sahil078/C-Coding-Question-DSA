/*A school has following rules for grading system
a. below 25 - F
b. 25 to 45 - E
c. 45 to 50 - D
d. 50 to 60 - C
e. 60 to 80 - B
f. Above 80 - A
*/

#include<iostream>
using namespace std;

int main(){
    int mark;
    cout<<"Enter your Mark between (1 to 100) : ";
    cin>>mark;

    if(mark < 25){
        cout<<"Your Grade is F" <<endl;
    }
    else if(mark>=25 && mark<=45){
        cout<<"Your Grade is E"<<endl;
    }
    else if(mark>=45 && mark<=50){
        cout<<"Your Grade is D"<<endl;
    }
    else if(mark>=50 && mark<=60){
        cout<<"Your Grade is C"<<endl;
    }
    else if(mark>=60 && mark<=80){
        cout<<"Your Grade is B"<<endl;
    }
    else if(mark>=80 && mark<=100) {
        cout<<"Your Grade is A"<<endl;
    }
    else{
        cout<<"Enter the valid Marks ! Try Again"<<endl;
    }
    return 0;
}

