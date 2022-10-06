#include <bits/stdc++.h>

using namespace std;

int main(){
    int a;
    cin>>a;
    int arr[a][a];
    for(int i=0 ; i<a ; i++){
         for(int j=0; j<a; j++){
             cin>>arr[i][j];
         }
    }
    int c=0;
    int d=0;
    for(int i=0; i<a; i++){
        for(int j=0; j<a; j++){
            if(i==j)
            c+=arr[i][j];
            if(i+j == a-1)
            d+= arr[i][j];
        }
    }
    cout<<abs(c-d);
    return 0;
}

// https://www.hackerrank.com/challenges/diagonal-difference/submissions/code/294496002
