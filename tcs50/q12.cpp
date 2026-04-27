/* leap year */
#include<bits/stdc++.h>
using namespace std ;

bool leap(int year){
    if(year%400==0 || (year%4==0 && year%100 != 0))
        return true ;
    return false;
}
int main(){
    int year ;
    cin >> year ;
    cout << leap(year) << endl ;
    
}