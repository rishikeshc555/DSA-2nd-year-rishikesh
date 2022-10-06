#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{
    int a,temp=0,count=0,i;
    cin>>a;
    vector<int> array(a);
    for(i=0; i<a;i++)
    {
     cin>>array[i];
}
    sort(array.begin(),array.end());
temp=array[a-1];
    for(i=0; i<a; i++)
{
        if(temp==array[i])
            count++;
    }
cout<<count;
return 0;
} 

// https://www.hackerrank.com/challenges/birthday-cake-candles/submissions/code/294510798
