#include <iostream>
#include <vector>
using namespace std;
vector<struct quet> vquet;
vector<int> vint;
struct quet{
    int grade;
    int option;
    int right;
    int num = 0;
    int answer[5] = {0};
};

void inputQ(){
    int tgrade, toption, tright;
    quet tmpquet;
    scanf("%d %d %d ", &tgrade, &toption, &tright);
    tmpquet.grade = tgrade;
    tmpquet.option = toption;
    tmpquet.right = tright;
    char ctmp;
    while((ctmp = getchar()) != '\n'){
        if('a' <= ctmp && ctmp <= 'z'){
            tmpquet.answer[ctmp - 'a']++;
        }
    }
    vquet.push_back(tmpquet);
    vint.push_back(0);
}

void inputA(int questions){
    char tmp, tmpa;
    int j = 0;
    int gradeone = 0;
    while((tmp = getchar()) != '\n'){
        if('0' <= tmp && tmp <= '9'){
            int ans[5] = {0};
            int flag = true;
            for (int i = 0; i < tmp - '0'; ++i) {
                scanf(" %c", &tmpa);
                ans[tmpa - 'a']++;
            }
            for (int k = 0; k < 5; ++k) {
                if(ans[k] != vquet[j].answer[k]){
                    flag = false;
                    break;
                }
            }
            if(!flag){
                vint[j]++;
            } else {
                gradeone += vquet[j].grade;
            }
            j++;
        }
    }
    printf("%d\n", gradeone);

}

int main() {
//    freopen("/home/yyj/ClionProjects/PAT/PAT58/in58", "r", stdin);
    int students, questions;
    scanf("%d %d\n", &students, &questions);
    for (int i = 0; i < questions; ++i) {
        inputQ();
    }
    for (int i = 0; i < students; ++i) {
        inputA(questions);
    }
    int maxmis = 0;
    int finalmax = 0;
    for(int i = 0; i < vint.size(); i++){
        if(vint[i] >= maxmis){
            maxmis = vint[i];
            finalmax = i;
        }
    }

    if(maxmis == 0){
        printf("Too simple\n");
    } else {
        printf("%d ", maxmis);
        for(int i = 0; i < vint.size(); i++){
            if(vint[i] == maxmis && i != finalmax){
                printf("%d ", i + 1);
            } else if(i == finalmax){
                printf("%d", i + 1);
            }
        }
    }

    return 0;
}