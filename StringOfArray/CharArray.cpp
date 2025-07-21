// Array of string

// ways to create Array of string 

// 1. using Pointer
// #include<iostream>
// using namespace std;

// int main(){

//     // creating a string using pointer
//     const char* colour[3] = {"red","pink","blue"};

//     for(int i=0; i<3; i++){
//         cout<<colour[i]<<endl;
//     }
// }

// 2. using 2D Array

// #include<iostream>
// using namespace std;

// int main(){
//     char colour[4][10] = {"blue" , "red" , "yellow" , "pink"};

//     for(int i=0; i<4; i++){
//         cout<<colour[i]<<endl;
//     }
//     return 0;
// }

// 3. String class

// #include<iostream>
// using namespace std;

// int main(){
//     string colours[3];
//     colours[0] = "Red";
//     colours[1] = "Blue";
//     colours[2] = "Yellow";

//     for(int i=0 ; i<3; i++ ){
//         cout<<colours[i]<<endl;
//     }
//     return 0;
// }

// 4. vector class

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<string> colours;
//     colours.push_back("blue");
//     colours.push_back("red");
//     colours.push_back("pink");

//     for(int i=0; i<3; i++){
//         cout<<colours[i]<<endl;
//     }
// }


// get the length of string

#include<iostream>
using namespace std;

// function ro get the length of string
int getLength(char name[]){
    int len = 0;
    while (name[len] != '\0') {
        len++;
    }
    return len;
}
int main(){
    char name[10];
    cout << "Enter your Name: ";
    cin>>name;

    cout<<"your name is : "<<name;

    // calling the length function 
    int length = getLength(name);

    cout<<"\n The length of name is :"<<length;
}
