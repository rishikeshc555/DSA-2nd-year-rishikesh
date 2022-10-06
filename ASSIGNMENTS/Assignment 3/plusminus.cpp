#include<iostream>
using namespace std;
int main() {
int a;
cin >> a;
float p = 0, q = 0, r = 0;
for (int i = 0; i < a; i++) {
int val;
cin >> val;
r += (val == 0);
p += (val > 0);
q += (val < 0);
}
r = r / (double)a;
p = p / (double)a;
q = q / (double)a;
printf("%0.06lf\n%0.06lf\n%0.06lf\n", p, q, r);
return 0;
}


// https://www.hackerrank.com/challenges/plus-minus/submissions/code/294501778
