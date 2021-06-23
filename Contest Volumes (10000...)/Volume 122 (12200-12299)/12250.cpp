#include <iostream>

using namespace std;

int main(){
    string s,l;
    int d = 1;
    while (cin >> s && s != "#"){
            if (s == "HELLO") l = "ENGLISH";
            else if (s == "HOLA") l = "SPANISH";
            else if (s == "HALLO") l = "GERMAN";
            else if (s == "BONJOUR") l = "FRENCH";
            else if (s == "CIAO") l = "ITALIAN";
            else if (s == "ZDRAVSTVUJTE") l = "RUSSIAN";
            else l = "UNKNOWN";
            cout << "Case " << d << ": " << l << endl;
            d++;
    }
    return 0;
}
