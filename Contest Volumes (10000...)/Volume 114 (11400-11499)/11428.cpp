#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

void fun(int want, int x, int y){
    int r = pow(x,3) - pow(y,3);
    if (r == want){
        cout << x << " " << y << endl;
    }
    else if (x != y){
        if (r > want){
            return fun(want, x, y+1);
        }
        else{
            return fun(want, x+1,y);
        }
    }
    else{
        cout << "No solution" << endl;
    }
}

int main(){
    int N;
    while (scanf("%d", &N)==1 && N != 0){
        fun(N,2,1);
    }
    return 0;
}
