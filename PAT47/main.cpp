#include <iostream>
using namespace std;
int main() {
//    freopen("/home/yyj/ClionProjects/PAT/PAT47/in47", "r", stdin);
    int num, maxIndex = 0, maxGrade = 0;
    cin >> num;
    int grade[1001] = {0};
    for (int i = 0; i < num; ++i) {
        int index, a, grade1;
        scanf("%d-%d %d", &index, &a, &grade1);
        grade[index] += grade1;
        if (grade[index] > maxGrade){
            maxGrade = grade[index];
            maxIndex = index;
        }
    }
    cout << maxIndex << " " << maxGrade << endl;
    return 0;
}