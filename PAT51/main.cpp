#include <iostream>
#include <math.h>
using namespace std;
int main() {
//    freopen("/home/yyj/ClionProjects/PAT/PAT51/in51", "r", stdin);
    double r1, p1, r2, p2;
    scanf("%lf %lf %lf %lf", &r1, &p1, &r2, &p2);
    double r3, i3;
    r3 = r1 * r2 * (cos(p1) * cos(p2) - sin(p1) * sin(p2));
    i3 = r1 * r2 * (cos(p1) * sin(p2) + sin(p1) * cos(p2));
    if(r3 + 0.005 > 0){
        printf("%.2lf", fabs(r3));
    } else{
        printf("%.2lf", r3);
    }
    if(i3 + 0.005 > 0){
        printf("+%.2lfi", fabs(i3));
    } else {
        printf("%.2lfi", i3);
    }
    return 0;
}