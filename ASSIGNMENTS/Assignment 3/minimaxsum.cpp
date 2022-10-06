#include <bits/stdc++.h>
using namespace std;
int main() 
{
int a,i;
long long int sum=0;
vector<int> array;
for(i=0; i<5; i++)
{
        cin>>a;
        sum+=a;
        array.push_back(a);
}
        sort(array.begin(), array.end()); 
        cout<<sum-array[4]<<" "<<sum-array[0];  
        return 0;
}

// https://www.hackerrank.com/challenges/mini-max-sum/submissions/code/294508024
