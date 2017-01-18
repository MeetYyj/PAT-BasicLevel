#include <iostream>
using namespace std;
struct student{
    int kaoshiNum;
    char id[15];
};
int main() {

//    student stu[1001];
//    student tmp;
//    freopen("/home/yyj/ClionProjects/PAT/PAT41/in41","r",stdin);
//    int num;
//    scanf("%d",&num);
//    getchar();
//    for (int i = 0; i < num; ++i) {
//        int j = 0;
//        while((tmp.id[j] = getchar()) != ' '){
//            j++;
//        }
//        tmp.id[j]='\0';
//        int tmpshijiNum, tmpkaoshiNum;
//        scanf("%d %d", &tmpshijiNum,&tmpkaoshiNum);
//        tmp.kaoshiNum = tmpkaoshiNum;
//        stu[tmpshijiNum] = tmp;
//        getchar();
//    }
//    int searchNum;
//    scanf("%d", &searchNum);
//    for (int k = 0; k < searchNum; ++k) {
//        int l;
//        scanf("%d", &l);
//        printf("%s %d\n", stu[l].id, stu[l].kaoshiNum);
//
//    }

    student stu[1001];
    student tmp;
//    freopen("/home/yyj/ClionProjects/PAT/PAT41/in41","r",stdin);
    int num;
    scanf("%d",&num);
    for (int i = 0; i < num; ++i) {
        int tmpshijiNum;
        scanf("%s %d %d",&tmp.id, &tmpshijiNum, &tmp.kaoshiNum);
        stu[tmpshijiNum] = tmp;
    }
    int searchNum;
    scanf("%d", &searchNum);
    for (int k = 0; k < searchNum; ++k) {
        int l;
        scanf("%d", &l);
        printf("%s %d\n", stu[l].id, stu[l].kaoshiNum);

    }

    return 0;
}