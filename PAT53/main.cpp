#include <iostream>
using namespace std;
int main() {
//    freopen("/home/yyj/ClionProjects/PAT/PAT53/in53", "r", stdin);
    int allhouse;
    double threshold, allday;
    scanf("%d %lf %lf", &allhouse, &threshold, &allday);
    int pempty = 0, rempty = 0;
    for (int i = 0; i < allhouse; ++i) {
        int day;
        int countday = 0;
        scanf("%d", &day);
        for (int j = 0; j < day; ++j) {
            double dian;
            scanf("%lf", &dian);
            if(dian < threshold){
                countday++;
            }
        }
        if(countday > day/2 && day > allday){
            rempty++;
        } else if(countday > day/2){
            pempty++;
        }
    }
    double ppercent = (double) pempty/allhouse * 100;
    double rpercent = (double) rempty/allhouse * 100;
    printf("%.1lf%% %.1lf%%", ppercent, rpercent);

    return 0;
}