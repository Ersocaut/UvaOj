#include<iostream>

using namespace std;

int gcd(int a, int b){
    int g = 1;
    for (int i = 2; i < b; i++){
        if (a%i == 0 && b%i == 0){
            g = i;
        }
    }
    return g;
}

int gcd(int a){
    int g = 0;
    for (int i = 1; i < a; i++){
        for (int j = i+1; j <= a; j++){
            g = g + gcd(i,j);
        }
    }
    return g;
}

int main(){
    unsigned int N;
    scanf("%d", &N);
    while (N != 0){
        cout << gcd(N) << endl;
        scanf("%d", &N);
    }
    return 0;
}
