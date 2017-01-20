#include <iostream>
using namespace std;
int main() {
    freopen("/home/yyj/ClionProjects/PAT/PAT64/in64", "r", stdin);
    int count[37] = {0};
    int num;
    int countNum = 0;
    scanf("%d", &num);
    for (int i = 0; i < num; ++i) {
        int tmp;
        scanf("%d", &tmp);
        int sum = 0;
        while( tmp != 0){
            sum += tmp % 10;
            tmp /= 10;
        }
        if(count[sum] == 0){
            countNum++;
        }
        count[sum]++;
    }
    printf("%d\n", countNum);
    int a = 0;
    for(int i = 0; i < 37; i++){
        if(count[i] != 0 && a != countNum - 1){
            printf("%d ", i);
            a++;
        } else if (count[i] != 0){
            printf("%d", i);
        }
    }
    return 0;
}