// count how many 100 rs notes , 50 rs notes , 20 rs notes, 1 rs note in a amount

#include<iostream>
using namespace std;
int main()
{
	int amnt;
    int r100 , r50 , r20, r10, r1;
    r100=r50=r20=r10=r1=0;
    cout<<"Enter the amount: ";
    cin>>amnt;

    switch(amnt >= 100){
        case 1 :
            r100 = amnt/100;
            amnt -= r100*100;
            break;
    }
    switch(amnt >= 50){
        case 1: 
            r50 = amnt/50;
            amnt -= r50*50;
            break;
    }
    switch(amnt >=20){
        case 1:
            r20 = amnt/20;
            amnt -= r20*20;
            break; 
    }
    switch(amnt >= 10){
        case 1:
            r10 = amnt/10;
            amnt -= r10*10;
            break;
    }
    switch (amnt >= 1){
        case  1:
            r1 = amnt/1;
            amnt -= r1*1;
            break;
    }
    cout<<"RS 100 Notes = "<<r100<<endl;
    cout<<"RS 50 Notes = "<<r50<<endl;
    cout<<"RS 20 Notes = "<<r20<<endl;
    cout<<"RS 10 Notes = "<<r10<<endl;
    cout<<"RS 1 coin = "<<r1<<endl;
    return 0;
}
