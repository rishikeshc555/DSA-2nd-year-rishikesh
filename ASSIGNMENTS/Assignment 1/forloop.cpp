#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    string arr[9] = {"one","two","three","four","five","six","seven","eight","nine"};
    int a, b;
    cin>> a >> b;
    
    for(int i = a; i<= b; i++){
        if(i>=1 && i <= 9){
            cout << arr[i-1]<<endl;
        }
        else{
            if(i%2 == 0){
                cout<<"even" <<endl;
            }
            else{
                cout << "odd" <<endl;
            }
        }
    }
    return 0;
}


// https://www.hackerrank.com/challenges/c-tutorial-for-loop/submissions/code/291822303
