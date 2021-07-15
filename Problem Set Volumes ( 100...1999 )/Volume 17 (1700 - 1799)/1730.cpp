#include<iostream>

using namespace std;

long long gcd(long long int a, long long int b){
    if (b == 0) return a;
    return gcd(b, a%b);
}

long long lcm(int a, int b){
    return (a / gcd(a,b) * b);
}

int main(){
    long int N, ac;
    while (scanf("%d",&N)==1 && N != 0){
        ac = 0;
        for (int i = 2; i < N; i++){
            for ( int j = i + 1; j <= N; j++){
                if (lcm(i,j)==N){
                    ac += i + j;
                }
            }
        }
        cout << ac << endl;
    }
    return 0;
}
