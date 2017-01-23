#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct person{
    int height;
    char name[9];
};


bool isHigher(const person &a, const person &b){
    return a.height > b.height;
}

bool isNameShorter(const person &a, const person &b){
    string as = a.name;
    string bs = b.name;
    return as < bs;
};
int main() {
//    freopen("/home/yyj/ClionProjects/PAT/PAT55/in55", "r", stdin);
    int num, line;
    scanf("%d %d\n", &num, &line);
    vector<struct person> pvec;
    for(int i = 0; i < num; i++){
        person tmpP;
        scanf("%s %d", &tmpP.name, &tmpP.height);
        pvec.push_back(tmpP);
    }
    sort(pvec.begin(), pvec.end(), isNameShorter);
    stable_sort(pvec.begin(), pvec.end(), isHigher);
    int lineNum = num/line;
    int cnt = 0;
    for (int j = 0; j < line; ++j) {
        int currentLineNum;
        if(j == 0){
            currentLineNum = num % line + lineNum;
        } else {
            currentLineNum = lineNum;
        }
        vector<struct person> pvectmp(currentLineNum);
        int mid = currentLineNum/2 + 1;
        for (int i = 0; i < currentLineNum; ++i) {
            if (i == 0) {
                pvectmp[mid - 1] = pvec[cnt];
            } else if (i % 2) {
                pvectmp[mid - 1 - (i / 2 + 1)] = pvec[cnt];
            } else{
                pvectmp[mid - 1 + i / 2] = pvec[cnt];
            }
            cnt++;
        }
        for(int l = 0; l < pvectmp.size(); l++){
            if(l!=0)
                printf(" ");
            printf("%s", pvectmp[l].name);
        }
        printf("\n");
    }
//
//    for(auto aa : pvec){
//        cout << aa.name << " " << aa.height << endl;
//    }

    return 0;
}