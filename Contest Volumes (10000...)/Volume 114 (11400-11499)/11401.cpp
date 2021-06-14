#include<iostream>

using namespace std;

int des(int w, int a, int b, int c){
    if (w > (a + b + c)){
        return des(w,a + 1,b,c) + des(w,a,b + 1,c) + des(w,a,b,c + 1);
    }
    else{
        if ((a == 0) || (b == 0) || (c == 0)){
            return 0;
        }
        else if ((a <= b + c) && (b <= a + c) && (c <= a + b)){
            return 1;
        }
        else{
            return 0;
        }
    }
}

int main(){
    int N,f;
    while((scanf("%d",&N)==1 && N >= 3)){
        f = des(N,0,0,0);
        printf("%d\n", f);
    }
    return 0;
}
