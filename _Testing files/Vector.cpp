#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v1 = {1,2,3}, v2 = {3,2,1};
    if (v1.data() == v2.data()){
        cout << "son iguales" << endl;
    }
    return 0;
}
