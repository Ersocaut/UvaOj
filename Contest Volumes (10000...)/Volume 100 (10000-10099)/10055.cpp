#include <iostream>

using namespace std;

int main(){
    unsigned long long int a, b;
    while (scanf("%lld %lld", &a, &b) != EOF){
        if ( b > a ) cout << b - a << endl;
        else cout << a - b << endl;
    }
    return 0;
}
