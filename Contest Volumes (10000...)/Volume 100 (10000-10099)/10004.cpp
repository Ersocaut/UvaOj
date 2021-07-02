#include <iostream>
#include <vector>
#include <deque>

using namespace std;

bool bfs(vector<vector<int>> G, vector<int> V, int n){
    deque<int> deq;
    deq.push_back(n);
    int u;
    V[n] = 1;
    while (!deq.empty()){
        u = deq.front(); deq.pop_front();
        for (int i = 0; i < G.size(); i++){
            if (G[u][i] == 0) continue;
            if (V[i] == 0){
                V[i] = (V[u] == 2) ? 1 : 2;
                deq.push_back(i);
            }
            else if (V[u] == V[i]) return false;
        }
    }
    return true;
}

int main(){
    int n,l,a,b;
    while (scanf("%d", &n)==1 && n != 0){
        vector<vector<int>> G(n,vector<int>(n,0)); //Crea una matriz de tamaño n
        vector<int> C(n,0);
        scanf("%d",&l);
        for (int i = 0; i < l; i++){
            scanf("%d %d", &a, &b);
            G[a][b] = 1; G[b][a] = 1;
        }
        if (bfs(G,C,0)){
            cout << "BICOLORABLE." << endl;
        }
        else{
            cout << "NOT BICOLORABLE." << endl;
        }
    }
    return 0;
}
