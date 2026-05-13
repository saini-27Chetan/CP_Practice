#include <bits/stdc++.h>
using namespace std;
#define ll long long

void performTask(){
    ll ans=0;
    for(int i=0; i<10; i++){
        vector<char> v(10);
        for(int j=0; j<10; j++){
            cin>>v[j];
            if(v[j]=='X'){
                if((i==0||j==0)||(i==9||j==9))
                    ans+=1;
                
                else if((i==1||j==1)||(i==8||j==8))
                    ans+=2;
                    
                else if((i==2||j==2)||(i==7||j==7))
                    ans+=3;
                    
                else if((i==3||j==3)||(i==6||j==6))
                    ans+=4;
                    
                else if((i==4||j==4)||(i==5||j==5))
                    ans+=5;
            }

            // OR
            // if(v[j]=='X'){
            //     if((i==0 || i==9) || (j==0 || j==9))
            //         ans+=1;
                
            //     else if((i==1 || i==8) || (j==1 || j==8))
            //         ans+=2;
                    
            //     else if((i==2 || i==7) || (j==2 || j==7))
            //         ans+=3;
                    
            //     else if((i==3 || i==6) || (j==3 || j==6))
            //         ans+=4;
                    
            //     else if((i==4 || i==5) || (j==4 || j==5))
            //         ans+=5;
            // }
        }
    }
    cout<<ans<<endl;
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        performTask();
    }
    return(0);
}

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;

//     while(t--){
//         long long ans=0;
//         for(int i=0; i<10; i++){
//             vector<char> v(10);
//             for(int j=0; j<10; j++){
//                 cin>>v[j];
//                 if(v[j]=='X'){
//                     if((i==0 || j==0) || (i==9 || j==9))
//                         ans+=1;
                    
//                     else if((i==1 || j==1) || (i==8 || j==8))
//                         ans+=2;
                        
//                     else if((i==2 || j==2) || (i==7 || j==7))
//                         ans+=3;
                        
//                     else if((i==3 || j==3) || (i==6 || j==6))
//                         ans+=4;
                        
//                     else if((i==4 || j==4) || (i==5 || j==5))
//                         ans+=5;
//                 }

//                 // OR
//                 // if(v[j]=='X'){
//                 //     if((i==0 || i==9) || (j==0 || j==9))
//                 //         ans+=1;
                    
//                 //     else if((i==1 || i==8) || (j==1 || j==8))
//                 //         ans+=2;
                        
//                 //     else if((i==2 || i==7) || (j==2 || j==7))
//                 //         ans+=3;
                        
//                 //     else if((i==3 || i==6) || (j==3 || j==6))
//                 //         ans+=4;
                        
//                 //     else if((i==4 || i==5) || (j==4 || j==5))
//                 //         ans+=5;
//                 // }
//             }
//         }
//         cout<<ans<<endl;
//     }
//     return(0);
// }


// Other's Code

// #include <bits/stdc++.h>
// using namespace std;

// // Predefined score matrix representing the target's rings
// // Each element represents the score for that position on the target
// const int score[10][10] = {
// 	{1,1,1,1,1,1,1,1,1,1},
// 	{1,2,2,2,2,2,2,2,2,1},
// 	{1,2,3,3,3,3,3,3,2,1},
// 	{1,2,3,4,4,4,4,3,2,1},
// 	{1,2,3,4,5,5,4,3,2,1},
// 	{1,2,3,4,5,5,4,3,2,1},
// 	{1,2,3,4,4,4,4,3,2,1},
// 	{1,2,3,3,3,3,3,3,2,1},
// 	{1,2,2,2,2,2,2,2,2,1},
// 	{1,1,1,1,1,1,1,1,1,1}
// };

// int main()
// {
//     int t; // Number of test cases
//     cin >> t;
//     while (t--)
//     {
//         char a[10][10]; // 10x10 grid to store the target for each test case
//         for (int i = 0; i < 10; i++) // Loop through each row of the grid
//         {
//             string s;
//             cin >> s; // Read each row as a string
//             for (int j = 0; j < 10; j++) // Loop through each column of the grid
//             {
//                 a[i][j] = s[j]; // Store each character in the grid
//             }
//         }
//         // Input for the current test case is now stored in 'a'

//         int total_score = 0; // Variable to accumulate the total score for the current test case
//         for (int i = 0; i < 10; i++) // Loop through each row of the grid
//         {
//             for (int j = 0; j < 10; j++) // Loop through each column of the grid
//             {
//                 if (a[i][j] == 'X') // Check if there is an arrow at this position
//                 {
//                     total_score += score[i][j]; // Add the score for this position to the total score
//                 }
//             }
//         }
//         cout << total_score << endl; // Output the total score for the current test case
//     }
//     return 0;
// }

// Time Complexity (TC): O(n^2) = O(100)
// Space Complexity (SC): O(10*10) = O(100)