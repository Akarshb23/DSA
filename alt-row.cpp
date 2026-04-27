/*to find the sum of alternate rows of a matrix*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int N ;
    cin >> N ;
    int mat[N][N];
    int sum = 0 ;
    for(int i = 0 ; i<N ; i++ ){
        for(int j = 0 ; j<N ; j++){
            cin >> mat[i][j];
        }
    }
    for(int i = 0 ; i<N ; i++ ){
        for(int j = 0 ; j<N ; j++){
            if(i%2)
                sum += mat[i][j];
        }
    }
    cout << sum << endl;
    return 0 ;
}