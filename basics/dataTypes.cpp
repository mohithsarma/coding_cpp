#include <iostream> 
#include <string>
using namespace std; 
/* the 
    int range = +- 10^9
    long range = +-10^12 
    long long range = +-10^18 */
int main () {
    int x =10;
    cout<<x<<"\n";
    long y = 123413413; 
    cout<<y << "\n";
    long long w = 23432414314; 
    cout << w << "\n"; 
    // float , double 
    float k = 123.123;
    cout << k << "\n";
    // string and getline 
    string s1;
    string s2; 
    string str;
    // if its a string then it will only take until space 
    cin >> s1>>s2; 
    cout<<s1<<"\n"<< s2<< "\n"; 
    // for getting the whole line rather than using only the 
    // words until space using strings we can use the getline(cin,str) 
    getline(cin,str);
    cout<<str<<"\n"; 
    // char 
    char kk = 'k';
    cout<<kk<<"\n"; 
    return 0 ; 

}
