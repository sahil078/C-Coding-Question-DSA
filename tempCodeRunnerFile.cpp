
// int longestSequence (vector<int> &a) {
//     int n = a.size();   // size of array 
//     int longest = 1;

//     // Pick a element and search for it's consequetive number

//     for(int i=0; i<n; i++) { 
//         int x = a[i];
//         int cnt = 1;

//         // search for consecutive number

//         while(linearSearch(a , x + 1) == true) {
//             x += 1;
//             cnt += 1;
//         }

//         longest = max(longest, cnt);
//     }

//     return longest;
// }