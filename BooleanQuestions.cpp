// Lets understand how boolean works with question.
// We have to check user is eligible to vote or not.

#include <iostream>
using namespace std;

int main(){
    int age;  // variable to store age
    cout<<"Enter your age: ";    // Display message to user for taking age as input
    cin>>age;  // storing user input in variable age 
    bool isEligible = age>18;  // Deaclaring boolean and intialize it on the basis of condition
    if(isEligible){    //  implement if-else using boolean
        cout<<"You're eligible to vote";
    }
    else{
        cout<<"You're not eligible to vote";
    }
  return 0;
}
