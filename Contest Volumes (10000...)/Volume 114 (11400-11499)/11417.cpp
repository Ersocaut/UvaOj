#include<iostream>
#include<tuple>
#include<map>

using namespace std;
map<tuple<int,int>,int> rev;

bool eval(int a, int b){
    tuple <int, int> ev(a,b);
    if (rev.find(ev) != rev.end()){
        return true;
    }
    return false;
}

int gcd(int a, int b){
    int g = 1;
    for (int i = 2; i < b; i++){
        if (a%i == 0 && b%i == 0){
            g = i;
        }
    }
    rev[make_tuple(a,b)] = g;
    return g;
}

int gcd(int a){
    int g = 0;
    for (int i = 1; i < a; i++){
        for (int j = i+1; j <= a; j++){
            if (eval(i,j)){
                g += rev[make_tuple(i,j)];
            }
            else{
                g = g + gcd(i,j);
            }
        }
    }
    return g;
}

int main(){
    unsigned int N;
    scanf("%d", &N);
    while (N != 0){
        printf("%d\n", gcd(N));
        scanf("%d", &N);
    }
    return 0;
}
