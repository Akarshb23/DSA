/* fibonacci */
#include<bits/stdc++.h>
using namespace std ;

int fibb(int n){
    if(n == 0)
        return 0 ;
    else if(n==1)
        return 1 ;
    else
        return fibb(n-1) + fibb(n-2);
}
int main(){
    int N ;
    cin >> N ;
    for(int i = 0 ; i<N ; i++){
        cout << fibb(i) << " ";
    }
    
}