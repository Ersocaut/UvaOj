#include<iostream>
#include<stdio.h>

using namespace std;

int func( int n ){
    int t = 1;
    while ( n > 1){
        if ( n%2 == 0 ){
            n = n/2;
        }
        else{
            n = (3*n) + 1;
        }
        t++;
    }
    return t;
}

int main(){
    int a,b,g,r,p;
    while (scanf("%d %d", &a, &b) == 2){
        cout << a << " " << b << " ";
        g = 1;
        if (a > b){
            p = b;
            b = a;
            a = p;
        }
        for (int i = a; i <= b; i++){
            r = func(i);
            if ( r > g ){
                g = r;
            }
        }
        cout << g << endl;
    }
    return 0;
}
