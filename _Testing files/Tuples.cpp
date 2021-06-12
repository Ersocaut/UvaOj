#include<iostream>
#include<tuple>
#include<map>

using namespace std;

int main(){
    tuple <int, int> tu(1,3);
    map<tuple<int,int>,int> ma;
    ma[tu] = 33;
    if (ma.find(tu) != ma.end()){
        cout << ma[tu] << endl;
    }
    return 0;
}
