/*
****
****
****
*/

// #include <iostream>
// using namespace std;

// int main(){
//     int n ;
//     cin>>n;

//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }

/*
 *
 **
 ***
 ****
 *****
 */

// #include<iostream>
// using namespace std;

// int main(){
//     int n ;
//     cin>>n;

//     for(int i=0; i<n; i++){
//         for(int j=0; j<=i; j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*
1
12
123
1234
12345
*/

// #include<iostream>
// using namespace std;

// int main(){
//     int n ;
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*
*****
****
***
**
*

for this problem we can create a fromula like n-i+1 n denote the number of time that we want to run i denote the number of rows
*/

// #include<iostream>
// using namespace std;

// int main(){
//     int n ;
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         for(int j=0; j<n-i+1; j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*
12345
1234
123
12
1

for this problem we can create a fromula like n-i+1 n denote the number of time that we want to run i denote the number of rows
*/

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     for(int i=0; i<n; i++){
//         for(int j=1; j<n-i+1; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*   Pyramid structure
   *
  ***
 *****
 */

// #include<iostream>
// using namespace std;

// int main(){
//     int n ;
//     cin>>n;

//     for(int i=0; i<n; i++){
//         // Space
//         for(int j=0; j<n-i-1; j++){
//             cout<<" ";
//         }
//         // star
//         for(int k=0; k<2*i+1; k++){
//             cout<<"*";
//         }
//         // space
//         for(int j=0; j<n-i-1; j++){
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }

/*  Reverse Pyramid structure
 *****
  ***
   *
 */

// #include <iostream>
// using namespace std;

// int main()
// {

//     int n;
//     cin >> n;

//     // Lower part
//     for (int i = 0; i < n; i++)
//     {

//         // space
//         for (int j = 0; j < i; j++)
//         {
//             cout << " ";
//         }

//         // star
//         for (int j = 0; j < 2 * n - (2 * i + 1); j++)
//         {
//             cout << "*";
//         }
//         // space
//         for (int j = 0; j < i; j++)
//         {
//             cout << " ";
//         }
//         cout<<endl;
//     }
// }


//    *
//   ***
//  *****
//  *****
//   ***
//    *


// #include <iostream>
// using namespace std;

// int main()
// {

//     int n;
//     cin >> n;

//     // upper part
//     for(int i=0; i<n; i++){
//         // Space
//         for(int j=0; j<n-i-1; j++){
//             cout<<" ";
//         }
//         // star
//         for(int k=0; k<2*i+1; k++){
//             cout<<"*";
//         }
//         // space
//         for(int j=0; j<n-i-1; j++){
//             cout<<" ";
//         }
//         cout<<endl;
//     }

//     // Lower part
//     for (int i = 0; i < n; i++)
//     {

//         // space
//         for (int j = 0; j < i; j++)
//         {
//             cout << " ";
//         }

//         // star
//         for (int j = 0; j < 2 * n - (2 * i + 1); j++)
//         {
//             cout << "*";
//         }
//         // space
//         for (int j = 0; j < i; j++)
//         {
//             cout << " ";
//         }
//         cout<<endl;
//     }
// }


/*

*
**
***
****
***
**
*

*/

// #include<iostream>
// using namespace std;

// int main(){
//     int n ;
//     cin>>n;

//     for(int i = 1; i <= 2*n-1; i++){
//         int star = i;

//         // after printing the star to n terms 
//         if(star > n){
//             star = 2*n-i;
//         }

//         for(int j=1; j <= star; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }


/*
1
01
101
0101
10101
*/

// #include<iostream>
// using namespace std;

// int main(){
//     int n ;
//     cin>>n;

//     int start = 1;

//     for(int i = 0; i < n; i++){
//         if(i % 2 == 0){
//             start = 1;
//         }
//         else{
//             start = 0;
//         }

//         for(int j=0; j<=i; j++){
//             cout<<start;
//             start = 1 - start;
//         }
//         cout<<endl;
//     }
// }


/*
1      1
12    21
123  321
12344321
*/

// #include<iostream>
// using namespace std;

// int main(){
//     int n ;
//     cin>>n;

//     int space =  2*(n-1);

//     for(int i = 1; i <= n; i++){
//         // number
//         for(int j=1; j<=i; j++){
//             cout<<j;
//         }

//         // space
//         for(int j=1; j<=space; j++){
//             cout << " ";
//         }

//         // number
//         for(int j=i; j>=1; j--){
//             cout<<j;
//         }

//         cout<<endl;
//         space -= 2;
//     }
// }


/*
1
2 3
4 5 6
7 8 9 10 

*/



// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int num =1;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i; j++){
//             cout<<num<<" ";
//             num = num+1;
//         }
//         cout<<endl;
//     }
// }


/*
A
AB
ABC
ABCD
*/

// #include<iostream>
// using namespace std;

// int main(){
//     int n ;
//     cin>>n;

//     for(int i=0; i<n; i++){
//         for(char ch = 'A'; ch <= 'A'+ i; ch++){
//             cout<<ch;
//         }
//         cout<<endl;
//     }
// }


/*
ABCDE
ABCD
ABC
A
*/

// #include<iostream>
// using namespace std;

// int main(){
//     int n ;
//     cin>>n;

//     for(int i=0; i<n; i++){
//         for(char ch = 'A'; ch <= 'A' + (n-i-1); ch++){
//             cout<<ch;
//         }
//         cout<<endl;
//     }
// }