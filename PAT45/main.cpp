#include <iostream>
#include <vector>
using namespace std;
int main() {

//    freopen("/home/yyj/ClionProjects/PAT/PAT45/in45", "r", stdin);
    int num;
    scanf("%d\n", &num);
    vector<int> ivec;
    for (int i = 0; i < num; ++i) {
        int tmp;
        scanf("%d", &tmp);
        ivec.push_back(tmp);
    }

    vector<int> judge(num, 0);
    int maxNum = 0, minNum = 1000000000;
    int cnt;
    for (int j = 0; j < num; ++j) {
        if(maxNum < ivec[j]){
            judge[j]++;
            maxNum = ivec[j];
        }
    }
    for (int k = num - 1; k >= 0 ; --k) {
        if(minNum > ivec[k]){
            judge[k]++;
            if(judge[k] == 2){
                cnt++;
            }
            minNum = ivec[k];
        }
    }
    printf("%d\n", cnt);
    int cnt2 = 0;
    for (int l = 0; l < num; ++l) {
        if(judge[l] == 2){
            if(cnt2 != 0){
                printf(" ");
            }
            printf("%d", ivec[l]);
            cnt2++;
        }
    }
    printf("\n");
    return 0;
}