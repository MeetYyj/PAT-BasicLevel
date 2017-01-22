#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    freopen("/home/yyj/ClionProjects/PAT/PAT65/in65", "r", stdin);
    int num;
    scanf("%d\n", &num);
    int couple[100000] = {-1};
    for (int i = 0; i < num; ++i) {
        int tmp1, tmp2;
        scanf("%d%d", &tmp1, &tmp2);
        couple[tmp1] = tmp2;
        couple[tmp2] = tmp1;
    }
    int numParty;
    scanf("%d\n", &numParty);
    vector<int> guest;
    int isExist[100000] = {0};
    for (int j = 0; j < numParty; ++j) {
        int tmp;
        scanf("%d", &tmp);
        guest.push_back(tmp);
        isExist[couple[tmp]] = 1;
    }
    vector<int> s;
    for (int k = 0; k < numParty; ++k) {
        if(!isExist[guest[k]])
            s.push_back(guest[k]);
    }
    printf("%d\n", s.size());
    sort(s.begin(), s.end());
    for (vector<int>::iterator it = s.begin();it != s.end();it++) {
        if(it != s.begin()){
            printf(" ");
        }
        printf("%05d", *it);
    }

    return 0;
}