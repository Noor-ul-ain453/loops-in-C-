#include<iostream>
using namespace std;
int main()
   {
    // LOOPS in C++
    //while loop
    int num = 1;
    while (num <= 10) {
        cout << num << " ";  // Display the current number
        num++;  // Increment the counter
    }
    cout<<endl;
    //For loop
    for (int num = 1; num <= 10; num++) {  // Initialize, condition, increment
        cout << num << " ";  // Display the current number
    }
    cout<<endl;
    //do while loop
    int num = 1;  // Initialize the counter
    
    do {
        cout << num << " ";  // Display the current number
        num++;  // Increment the counter
    } while (num <= 10);  // Condition to continue the loop
    cout<<endl;
    //nested loop
    int n = 5;
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=n ; j++){

        cout<<"*";
    }}
     return 0 ;
   }
