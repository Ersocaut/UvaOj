#include <iostream>
#include <algorithm>

using namespace std;

unsigned int alturas[50005];

int main()
{
    unsigned int N, Q, se;
    scanf("%d", &N);
    for (unsigned int i = 0; i < N; ++i)
        scanf("%d", &alturas[i]);
    scanf("%d", &Q);
    while (Q--){
        scanf("%d", &se);
        unsigned int * mayor = upper_bound(alturas, alturas + N, se);
        unsigned int * menor = mayor;
        --menor;
        while (menor >= alturas && *menor == se){
            //cout << "menor = " << menor << endl;
            //cout << "*menor = " << *menor << endl;
            --menor;
        }
        if (menor >= alturas)
            printf("%d ", *menor);
        else
            printf("X ");

        if (mayor == alturas + N)
            printf("X\n");
        else
            printf("%d\n",*mayor);
    }

}
