#include <bits/stdc++.h>
using namespace std; 

/* 
Take the day number and print the corresponding day 
for 1 - Monday 
for 2 - Tuesday 
etc until for 7 - saturday 
*/
int main() {
    int day; 
    cin >> day; 

    switch(day){ 
        case 1: // what ever is your switch you write that in place of 1
            cout<< "Monday";
            break;
        case 2:
            cout<< "Tuesday";
            break;
        case 3:
            cout<< "Wednesday";
            break;
        
        case 4:
            cout<< "Thursday";
            break;

        case 5:
            cout<< "Friday";
            break;

        case 6:
            cout<< "Saturday";
            break;
        case 7:
            cout<< "Sunday";
            break;
        default:
            cout<<"invalid";
            break;
        cout<<"invalid check";
        
    }

    return 0 ;
}