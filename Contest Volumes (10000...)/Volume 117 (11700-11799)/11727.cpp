#include <iostream>

using namespace std;

int main(){
    long int n, a, b, c;
    scanf("%ld", &n);
    for (int i = 1; i <= n; i++){
        cout << "Case " << i << ": ";
        scanf("%ld %ld %ld", &a, &b, &c);
        if ((a < b && b < c) || (a > b && b > c)) printf("%ld\n", b);
        else if ((b < a && a < c) || (b > a && a > c)) printf("%ld\n", a);
        else (printf("%ld\n",c));
    }
    return 0;
}
