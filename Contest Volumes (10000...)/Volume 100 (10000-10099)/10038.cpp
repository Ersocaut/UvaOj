#include <iostream>
#include <vector>

using namespace std;

bool jolly(int n){
    vector<int> m(n);
    int s, c[n+1] = {0};
    for (int i = 1; i <= n; i++){
        scanf("%d", &s);
        m[i] = s;
        if (i > 1){
            if (abs(m[i] - m[i-1]) < n){
                c[abs(m[i] - m[i-1])]++;
            }
        }
    }
    for (int i = 1; i < n; i++){
        if (c[i] == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    while(scanf("%d", &n)==1 && n != EOF){
        if (jolly(n)) printf("Jolly\n");
        else printf("Not jolly\n");
    }
    return 0;
}
