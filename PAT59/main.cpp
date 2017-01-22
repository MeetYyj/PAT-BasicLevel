#include <iostream>
using namespace std;
int main() {
    freopen("/home/yyj")
    int rank[10000] = {0};
    int num;
    scanf("%d", &num);
    int count = 1;
    for (int i = 0; i < num; ++i) {
        int tmp;
        scanf("%d", &tmp);
        rank[tmp] = count;
        count++;
    }
    int inquiryNum;
    scanf("%d", &inquiryNum);
    for (int j = 0; j < inquiryNum; ++j) {
        int tmp;
        scanf("%d", &tmp);
        switch(tmp){
            case -1:
                printf("%04d: checked\n", tmp);
                break;
            case 0:
                printf("%04d: Are you kidding?\n", tmp);
                break;
            case 1:
                printf("%04d: Mystery Award\n", tmp);
                rank[tmp] = -1;
                break;
            case 2:
                printf("%04d: Minion\n", tmp);
                rank[tmp] = -1;
                break;
            case 3:
                printf("%04d: Chocolate\n", tmp);
                rank[tmp] = -1;
                break;
        }
    }
    return 0;
}