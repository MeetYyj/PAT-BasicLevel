#include <iostream>
#include <math.h>
using namespace std;
bool isPrime(int a){
    for(int i = 2; i < sqrt(a) + 1; i++){
        if(a%i == 0)
            return false;
    }
    return true;
}

int main() {
    freopen("/home/yyj/ClionProjects/PAT/PAT59/in59", "r", stdin);
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
        if(rank[tmp] == -1) {
            printf("%04d: Checked\n", tmp);
        } else if(rank[tmp] == 0) {
            printf("%04d: Are you kidding?\n", tmp);
        } else if(rank[tmp] == 1) {
            printf("%04d: Mystery Award\n", tmp);
            rank[tmp] = -1;
        } else if(isPrime(rank[tmp])) {
            printf("%04d: Minion\n", tmp);
            rank[tmp] = -1;
        } else {
            printf("%04d: Chocolate\n", tmp);
            rank[tmp] = -1;
        }
    }
    return 0;
}