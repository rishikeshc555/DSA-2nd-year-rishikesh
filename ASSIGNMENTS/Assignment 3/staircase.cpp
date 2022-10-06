#include<iostream>
using namespace std;
int main () {
int a;
cin >> a;
for (int i = 1; i <=a ; i++) {
for (int j = 0; j < i; j++) {
if(j==0) {
for(int n = 0; n < a - i; n++) cout << " ";
}
cout << "#";
}
cout << endl;
}
return 0;
}

// https://www.hackerrank.com/challenges/staircase/submissions/code/294506119
