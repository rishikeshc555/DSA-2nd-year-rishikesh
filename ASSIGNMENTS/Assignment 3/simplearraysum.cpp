#include<bits/stdc++.h>
using namespace std;

int simpleArraySum(vector<int> B){
    int sum = 0;
    for(int i=0; i<B.size();i++){
        sum+=B[i];
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    vector<int>A(n);
    for (int i=0;i<n;i++) cin>>A[i];
    cout<<simpleArraySum(A);
}


//  https://www.hackerrank.com/challenges/simple-array-sum/submissions/code/292978613
