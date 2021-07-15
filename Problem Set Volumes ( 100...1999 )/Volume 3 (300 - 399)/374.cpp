#include <iostream>
#include <math.h>

using namespace std;

int main(){
    long int b, p, m;
    while (scanf("%ld %ld %ld", &b, &p, &m)==3){
        unsigned long long int n;
        n = pow(b,p);
        cout << n << endl;
    }
    return 0;
}
