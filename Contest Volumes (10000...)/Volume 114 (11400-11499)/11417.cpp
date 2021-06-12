#include<iostream>
#include<stdio.h>

using namespace std;

long int gcd(long int a, long int b){
    if (b==0){
        return a;
    }
    long int piv, sw;
    if (a<b){
        sw = a;
        a = b;
        b = sw;
    }
    piv = a%b;
    return gcd(b,piv);
}

long int gcd(int a){
    long int g = 0, i, j;
    for (i = 1; i < a; i++){
        for (j = i+1; j <= a; j++){
            g += gcd(i,j);
        }
    }
    return g;
}

int main(){
    long int N, g;
    while (scanf("%d", &N)==1 && N != 0){
        g = gcd(N);
        printf("%d\n", g);
        scanf("%d", &N);
    }
    return 0;
}
