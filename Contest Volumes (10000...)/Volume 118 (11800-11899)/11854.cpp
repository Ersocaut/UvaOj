#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    while (scanf("%d %d %d",&a, &b, &c)==3 && a != 0 && b != 0 && c != 0){
        if (a%3 == 0){
            if (b%4 == 0){
                if (c%5 == 0){
                    printf("right\n");
                }else printf("wrong\n");
            } else printf("wrong\n");
        }
        else if (a%4 == 0){
            if (b%3 == 0){
                if (c%5 == 0){
                    printf("right\n");
                } else printf("wrong\n");
            } else printf("wrong\n");
        }
    }
    return 0;
}
