#include <iostream>
using namespace std;

string low[13] = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
string high[13] = {"tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou", "asdasd"};

void earth2Mar(string tmp){
    int itmp = stoi(tmp);
    if(itmp >= 13 && (itmp%13!=0)){
        cout << high[itmp/13 - 1] << " " << low[itmp%13] << endl;
    } else if (itmp <13){
        cout << low[itmp] << endl;
    } else {
        cout << high[itmp/13 - 1] << endl;
    }
}

void mar2Earth(string tmp){
    if(tmp == low[0]){
        cout << 0 << endl;
    } else if(tmp.size() == 8){
        string str1(tmp, 0, 3);
        int high1;
        for (int i = 0; i < 12; ++i) {
            if(str1 == high[i]){
                high1 = i;
                break;
            }
        }
        cout << (high1 + 1) * 13 << endl;
    } else if(tmp.size()>3){
        string str1(tmp, 0, 3);
//        cout << str1 << endl;
        string str2(tmp, 4, 3);
//        cout << str2 << endl;

        int high1;
        int low1;
        for (int i = 0; i < 12; ++i) {
            if(str1 == high[i]){
                high1 = i;
                break;
            }
        }
        for (int i = 0; i < 13; ++i) {
            if(str2 == low[i]){
                low1 = i;
                break;
            }
        }
        cout << (high1 + 1) * 13 + low1 << endl;
    } else {
        string str1(tmp, 0, 3);
        int low1;
        for (int i = 0; i < 13; ++i) {
            if(str1 == low[i]){
                low1 = i;
                cout << low1 << endl;
                break;
            }
            if(str1 == high[i]){
                low1 = i;
                cout << (low1 +1) * 13 << endl;
            }
        }
    }
}

int main() {
    int num;
    freopen("/home/yyj/ClionProjects/PAT/PAT44/in44", "r", stdin);
    scanf("%d", &num);
    getchar();
    for (int i = 0; i < num ; ++i) {
        string tmp;
        getline(cin, tmp);
        if(isdigit(tmp[0])){
            earth2Mar(tmp);
        } else {
            mar2Earth(tmp);
        }

    }
    return 0;
}