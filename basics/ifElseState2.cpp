#include <bits/stdc++.h>

using namespace std; 
/*
A school has following grades 
<25 - F
>25  and <44 - E 
>45 and <49  - D 
>50 and <59  - C
>60 and <79  - B 
>80 and <100 - A 
ask user to enter marks and print corresponding grade.*/
int main () {
    int marks ; 
    cin>> marks; 
    if(marks < 25){
        cout<< "F"<< "\n";
    }
    else if(marks <=44){
        cout<<"E"<< "\n";
    }
    else if( marks <=49){
        cout<<"D"<< "\n";
    }
    else if( marks <=59){
        cout<<"C"<< "\n";
    }
    else if( marks <=79){
        cout<<"B"<< "\n";
    }
    else if( marks <=100){
        cout<<"A" << "\n";
    }



    
    return 0; 
}