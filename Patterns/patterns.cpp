#include <bits/stdc++.h>
using namespace std; 

void printPattern1(int n){
    for(int i =0;i< n;i++){
        for(int j =0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;

    }
}
void printPattern2(int n){
    for(int i =0;i< n;i++){
        for(int j =0;j<i+1;j++){
            cout<<"* ";
        }
        cout<<endl;

    }
}
void printPattern3(int n ){
    for(int i=1;i<=n;i++){
        for(int j =1;j<=i;j++){
            cout<<j<<" ";

        }
        cout<<endl;
    }
}
void printPattern4(int n ){
    for (int i =1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
void printPattern5(int n ){
    for (int i =1;i<=n;i++){
        for(int j =1; j<=n+1-i;j++){
            cout<<'*'<<" ";
            
        }
        cout<<endl;
    }
}
void printPattern6(int n ){
    for (int i =1;i<=n;i++){
        for(int j =1; j<=n+1-i;j++){
            cout<<j<<" ";
            
        }
        cout<<endl;
    }
}
void printPattern7(int n ){
    for(int i=0; i<n;i++){
        // for space
        for(int j =0 ;j<n-1-i;j++){
            cout<<" ";
        }
        // for stars
        for(int k =0;k<2*i+1;k+=1){
            cout<<"*";
        }
        for(int j =0 ;j<n-1-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void printPattern8(int n ){
    for(int i=0; i<n;i++){
        // for space
        for(int j =0 ;j<i;j++){
            cout<<" ";
        }
        // for stars
        for(int k =2*(n-i)-1;k>=1;k-=1){
            cout<<"*";
        }
        // for(int j =0 ;j<i;j++){
        //     cout<<" ";
        // }
        cout<<endl;
    }

}
void printPattern9(int n ){
    for(int i=0; i<n;i++){
        // for space
        for(int j =0 ;j<n-1-i;j++){
            cout<<" ";
        }
        // for stars
        for(int k =0;k<2*i+1;k+=1){
            cout<<"*";
        }
        // for(int j =0 ;j<n-1-i;j++){
        //     cout<<" ";
        // }
        cout<<endl;
    }
    for(int i=0; i<n;i++){
        // for space
        for(int j =0 ;j<i;j++){
            cout<<" ";
        }
        // for stars
        for(int k =2*(n-i)-1;k>=1;k-=1){
            cout<<"*";
        }
        // for(int j =0 ;j<i;j++){
        //     cout<<" ";
        // }
        cout<<endl;
    }

}
void printPattern10(int n ){
    for(int i = 1;i<2*n;i++){
        int stars = i ; 
        if(i>n) stars = 2*n-i;
        for(int j =0;j<stars;j++){
            cout<<"*";
            // cout<<"|j , i , stars "<<j<<" "<<i<<" "<<stars<<" |";
        }
        cout<<endl;
    }
}
void printPattern11(int n ){
            int start =1;

    for(int i=0;i<n;i++){
        if(i%2 == 0) start =1;
        else start = 0;
        for(int j =0;j<=i;j++){
            cout<<start;
            start = 1-start;
        }
        cout<<endl;
        
    }
}
void printPattern12(int n ) {
    for( int i =1 ; i<=n;i++) {
        // for the first triangle 
        for(int j =1 ; j<=i ; j++){
            cout<<j;
        }
        // for spaces 
        for( int j =1;j<=2*(5-i) ; j++){
            cout<<" ";
        }
        // reverse first triangle
        for(int j=i;j>=1;j--) { 
            cout<<j;
        }
        cout<<endl;
    }
}
void printPattern13(int n ){ 
    int k =1; 
    for(int i =1; i<=n;i++){
        for( int j =1;j<=i;j++){
            cout<<k<<" ";
            k+=1;
        }
        cout<<endl;
    }
}
void printPattern14(int n ) { 
    for(int i =0  ; i<n ;i++){ 
        for(char ch= 'A' ; ch<='A'+i; ch++){
            cout<< ch ; 
        }
        cout<<endl;
    }
}
void printPattern15(int n ) { 
    for(int i=n;i>=1;i--){
        for(char ch = 'A' ; ch<'A'+i;ch++){
            cout<<ch; 
        }
        cout<<endl;
    }
}
void printPattern16(int n ) {
    char ch = 'A'; 
    for(int i=0;i<n;i++){

        for( int j =0 ; j<=i ; j++) {
            cout<<ch;
        }
        cout << endl;
        ch+=1;
    }
}
void printPattern17(int n ) {
    for (int i=0 ; i<n;i++){
        // spaces
        for(int j=0;j<n-1-i;j++){
            cout<<" ";
        }
        // characters 
        char ch = 'A';
        int breakpoint =(2*i+1)/2 ;
        for(int j =0 ; j< 2*i +1;j++){
            // if(j>i+1) ch=ch+2*i+1-j;
            // else ch=ch+j;
            cout<< ch;
            if(j<breakpoint) ch++;
            else ch--;

        }
        // spaces
        for(int j=0;j<n-1-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void printPattern18(int n ) {
    for( int i=0 ; i<n ;i++) { 
        char ch; 
        for(int j=n-i-1;j<=n-1;j++){
            ch = 'A'+j;
            cout<<ch;
        }
        cout<<endl;
    }
    // void printTriangle(int n) {
    // for( int i=0 ; i<n ;i++) { 
    //     char ch; 
    //     for(int j=n-1;j>=n-i-1;j--){
    //         ch = 'A'+j;
    //         cout<<ch<<" ";
    //     }
    //     cout<<endl;
    // }    
    // }
    // for the following pattern 
    // E
    // E D     
    // E D C
    // E D C B
    // E D C B A

}
void printPattern19(int n ) {
    for(int i =0 ; i<n ;i++){
        // stars n to 1 
        // for( int j=n-i;j>0;j--){
        //     cout<<"*"; 
        // }
        for( int j =1;j<=n-i;j++){
            cout<<"*";
        }
        // spaces from 0 to 2(n-1) 
        for( int j=2*i; j>0 ; j--){
            cout<<" ";
        }

        // stars n to 1 
        for( int j =1;j<=n-i;j++){
            cout<<"*";
        }
        // for( int j=n-i;j>0;j--){
        //     cout<<"*"; 
        // }
        cout<<endl;


    }
for(int i =n; i>0 ;i--){
        // stars 1 to n 
        for( int j =n-i;j>=0;j--){
            cout<<"*";
        }
        // spaces from 2(n-1) to 0 
        for( int j=0; j<2*(i-1); j++){
            cout<<" ";
        }

        // stars 1 to n 
        for( int j =n-i;j>=0;j--){
            cout<<"*";
        }
        // for( int j=n-i;j>0;j--){
        //     cout<<"*"; 
        // }
        cout<<endl;


    }
}
void printPattern19a(int n ){
    for( int i=1; i<=2*n-1;i++) { 
        int stars,spaces;
        if(i>(2*n-1)/2) stars = i-(2*n-1)/2-1;
        else stars = n-i;
        if(i>(2*n-1)/2) spaces = 4*n-2*i-2;
        else spaces = 2*(i-1);
        for(int j =0;j<=stars;j++){
            cout<<"*";
        }
        for(int j = 0; j< spaces;j++){
            cout<<" ";
        }
        for(int j =0;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void printPattern20(int n ) { 
    for( int i=1;i<=2*n-1;i++){ 
        int stars1 = i ;
        int spaces = 2*(n-i); 
        if(i>(2*n-1)/2) stars1 = 2*n-i;
        if(i>(2*n-1)/2) spaces = 2*(i-n);
        // stars
        for(int j=0;j<stars1;j++){
            cout<<"*";
        }
        // spaces until j= 2(n-i) ;
        for(int j=0 ; j<spaces;j++) {
            cout<< " ";
        }
        for(int j=0;j<stars1;j++){
            cout<<"*";
        }
    cout<<endl;
    }
}
void printPattern21(int n ) { 
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            if((j==0)||(j==n-1)||(i==0)||(i==n-1)) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }

}
void printPattern22(int n ) { 
    for(int i =0;i<2*n-1;i++){
        for(int j =0 ; j<2*n-1;j++){
            int top = i ; 
            int right = j ; 
            int left = ( 2*n-2) - j; 
            int bottom = (2*n-2) -i;
            cout<<n- min(min(top,right),min(left,bottom));
        }
        cout<<endl;
    }
}


int main (){
    int times ;
    cin>>times;
    for(int i = 0; i <times ; i++)
    {
        int n ;
        cin>>n ;
        printPattern22(n);
    }
}
