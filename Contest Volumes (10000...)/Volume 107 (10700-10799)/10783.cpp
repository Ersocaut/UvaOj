#include <iostream>

using namespace std;

int main(){
    int a, b, c, s;
    scanf("%d", &c);
    for (int i = 0; i < c; i++){
        scanf("%d %d", &a, &b);
        s = 0;
        for (int j = a; j <= b; j++){
            if (j%2 == 1){
                s += j;
            }
        }
        printf("Case %d: %d\n", i+1, s);
    }
    return 0;
}
