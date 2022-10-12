#include<bits/stdc++.h>

using namespace std;


int main(){
    int a1;
    int b1;
    int a2;
    int b2;
    cin >> a1 >> b1 >> a2 >> b2;
    if ((b1<= b2) || ((a2 - a1) % (b2 - b1))) {
        puts("NO");
    } else {
        puts("YES");
    }
    return 0;
}

//  https://www.hackerrank.com/challenges/kangaroo/submissions/code/295578123
