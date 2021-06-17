#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>

using namespace std;

vector<string> week {"SUN","MON","TUE","WED","THU","FRI","SAT"};

unordered_map<string, int> days;
unordered_map<string, int> months;

int cou(string mo, string da){
    vector<string>::iterator it;
    int a = months[mo], b, wd = 0;
    it = find( week.begin(), week.end(), da );
    b = it - week.begin();
    for (int i = 0; i < a; i++){
        if ((b + i)%7 == 5 || (b + i)%7 == 6){
            wd++;
        }
    }
    cout << wd << endl;
    return 0;
}

int main(){
    int cas;
    string da, mo;
    days["SUN"] = 0;days["MON"] = 1;days["TUE"] = 2;days["WED"] = 3;days["THU"] = 4;days["FRI"] = 5;days["SAT"] = 6;
    months["JAN"] = 31;months["FEB"] = 28;months["MAR"] = 31;months["APR"] = 30;months["MAY"] = 31;months["JUN"] = 30;months["JUL"] = 31;months["AUG"] = 31;months["SEP"] = 30;months["OCT"] = 31;months["NOV"] = 30;months["DEC"] = 31;
    scanf("%d", &cas);
    for (int i = 0; i < cas; i++){
        cin >> mo >> da;
        cou(mo,da);
    }
    return 0;
}
