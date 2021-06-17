#include<iostream>
#include<typeinfo>

using namespace std;
string cas;

int perm(string ne, int i, string ol){
    if (cas.size() == ne.size()){
        cout << ne << endl;
    }
    else{
        for (int j = 0; j < cas.size(); j++){
            string s = ne;
            s.append(i,cas[j]);
            perm(s, i + 1,ol);
    }
    return 0;
    }
}

int main(){
    while (cin >> cas){
        perm("",0,cas);
        cout << endl;
    }
    return 0;
}
