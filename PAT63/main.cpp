#include <iostream>
#include <math.h>
using namespace std;
int main() {
    freopen("/home/yyj/ClionProjects/PAT/PAT63/in63", "r", stdin);
    int num;
    double maxradius = 0;
    scanf("%d", &num);
    for (int i = 0; i < num; ++i) {
        int ai, bi;
        scanf("%d %d\n", &ai, &bi);
        double tmp = sqrt(ai * ai + bi * bi);
        if(tmp > maxradius) {
            maxradius = tmp;
        }
    }
    printf("%.2lf", maxradius);
    return 0;
}