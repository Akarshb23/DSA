/* largest of three numbers */
#include<bits/stdc++.h>
using namespace std ;

long long int largestOfThree(int a , int b , int c){
    return (max(a,max(b,c)));
}
int main(){
    int a , b , c ;
    cin >> a >> b >> c ;
    long long int result = largestOfThree(a,b,c);
    cout << result << endl ;
    
}