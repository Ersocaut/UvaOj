#include <iostream>

using namespace std;

int main(){
    int c, f;
    long long int siz, animals, frien, piv;
    scanf("%d", &c);
    for ( int i = 0; i < c; i++){
        scanf("%d", &f);
        piv = 0;
        for (int j = 0; j < f; j++){
            scanf("%lld %lld %lld", &siz, &animals, &frien);
            piv += (siz * frien);
        }
        cout << piv << endl;
    }
    return 0;
}
