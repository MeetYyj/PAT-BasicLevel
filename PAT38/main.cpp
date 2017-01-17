#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    int grade[101] = {0};
    for (int i = 0; i < num; ++i) {
        int a;
        scanf("%d", &a);
        grade[a]++;
    }
    int searchNum;
    cin >> searchNum;
    for (int j = 0; j < searchNum-1; ++j) {
        int b;
        scanf("%d", &b);
        printf("%d ", grade[b]);
    }
    int b;
    scanf("%d", &b);
    printf("%d", grade[b]);
    return 0;
}