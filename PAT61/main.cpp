#include <iostream>
using namespace std;
int main() {
    freopen("/home/yyj/ClionProjects/PAT/PAT61/in61", "r", stdin);
    int stu, ques;
    scanf("%d%d", &stu, &ques);
    int grade[100] = {0};
    int ans[100] = {0};
    for (int i = 0; i < ques; ++i) {
        scanf("%d", &grade[i]);
    }

    for (int j = 0; j < ques; ++j) {
        scanf("%d", &ans[j]);
    }
//    for(int l = 0; l < ques; l++){
//        cout << ans[l] << endl;
//    }
    int ij = 0;
    for (int k = 0; k < stu; ++k) {
        int sum = 0;
        for (int i = 0; i < ques; ++i) {
            int itmp;
            scanf("%d", &itmp);
            if(itmp == ans[i]){
                sum += grade[i];
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}