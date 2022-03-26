#include <iostream>

using namespace std;

int main(){
    char t;
    bool open = false;
    while (scanf("%c", &t) != EOF){
        if (t == '"'){
            if (open){
                printf("''");
            }else{
                printf("``");
            }
            open  = !open;
        }else{
            printf("%c", t);
        }
    }
    return 0;
}
