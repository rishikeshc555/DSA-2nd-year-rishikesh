#include<iostream>
using namespace std;
int main(){
    int n, i;
    cin>>n;
    long int a[n],sum=0;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        sum+=a[i];
    }
    cout<<sum;
    return 0;
}


// https://www.hackerrank.com/challenges/a-very-big-sum/submissions/code/294492573
