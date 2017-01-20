#include <iostream>
using namespace std;
struct symbol{
    char in[5] = {'\0'};
};
int main() {
//    freopen("/home/yyj/ClionProjects/PAT/PAT52/in52", "r", stdin);
    symbol expression[3][10];
    int len[3] = {0};
    for (int i = 0; i < 3; ++i) {
        char tmp1;
        bool flg = true;
        int index = 0;
        while((tmp1 = getchar()) != '\n'){
            if(tmp1 == '[' && flg == true){
                flg = false;
                index = 0;
            } else if(tmp1 == ']' && flg == false){
                flg = true;
                len[i]++;
            } else if(flg == false){
                expression[i][len[i]].in[index] = tmp1;
                index++;
            }
        }
    }
//    cout << len[0] << " " << len[1] << " " << len[2] << endl;
    int num;
    scanf("%d", &num);
    for (int j = 0; j < num; ++j) {
        int in1[5];
        scanf("%d %d %d %d %d", &in1[0], &in1[1], &in1[2], &in1[3], &in1[4]);
        if((in1[0] > len[0] || in1[0] <= 0)
                || in1[1] > len[1] || in1[1] <= 0
                || in1[2] > len[2] || in1[2] <= 0
                || in1[3] > len[1] || in1[3] <= 0
                || in1[4] > len[0] || in1[4] <= 0){
            printf("Are you kidding me? @\\/@\n");
        } else{
            printf("%s(%s%s%s)%s\n", expression[0][in1[0]-1].in, expression[1][in1[1]-1].in, expression[2][in1[2]-1].in, expression[1][in1[3]-1].in, expression[0][in1[4]-1].in);
        }
    }
//    char a[10];
//    int i = 0;
//    while((a[i] = getchar()) != '\n'){
//        i++;
//    }
//    a[i] = '\0';
//    printf("%s", a)
    return 0;
}