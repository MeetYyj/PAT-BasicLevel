#include <iostream>
using namespace std;
int main() {
//    freopen("/home/yyj/ClionProjects/PAT/PAT49/in49", "r", stdin);
    int num;
    double sum=0;
    scanf("%d", &num);
    for (int i = 0; i < num; ++i) {
        double tmp;
        scanf("%lf", &tmp);
        sum += (double)(num - i) * (double)(i + 1) * tmp;
    }
    printf("%.2lf", sum);
    return 0;
}