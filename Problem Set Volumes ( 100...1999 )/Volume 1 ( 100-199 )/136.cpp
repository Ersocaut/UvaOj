#include <iostream>

using namespace std;

bool ugly( long int n ){
    if (n == 1 || n == 2 || n == 3 || n == 5) return true;
    else if (n%2 == 0) return ugly(n/2);
    else if (n%3 == 0) return ugly(n/3);
    else if (n%5 == 0) return ugly(n/5);
    else return false;
}

int main(){
    //int ug[1500]= {0}, c = 1, i = 0;
    /*while( ug[1499] == 0){
        if (ugly(c)){
            //cout << c << " is ugly" << endl;
            ug[i] = c;
            i++;
        }
        c++;
    }*/
    printf("The 1500'th ugly number is 859963392.\n");
    return 0;
}
