#include <iostream>
#include <vector>
using namespace std;
int main() {
//    freopen("/home/yyj/ClionProjects/PAT/PAT62/in62", "r", stdin);
    int z1, z2, m1, m2, num;
    scanf("%d/%d %d/%d %d", &z1, &m1, &z2, &m2, &num);
    int a1, a2;
    a1 = z1 * num / m1;
    a2 = z2 * num / m2;
    if (a1 <= a2){
        a1 = z1 * num / m1 + 1;
        if((z2 * num) % m2){
            a2 = z2 * num / m2;
        }else {
            a2 = z2 * num / m2 - 1;
        }
    } else if (a1 > a2){
        a1 = z2 * num / m2 +1;
        if((z1 * num) % m1){
            a2 = z1 * num / m1;
        }else {
            a2 = z1 * num / m1 - 1;
        }
    }
//    cout << a1 << " " << a2 << endl;
    vector<int> vint;
    for(int i = a1; i <= a2; i++){
        int tmp1 = num;
        int tmp2 = i;
        if(i == 1){
            vint.push_back(i);
        }
        while(tmp1 % tmp2 != 0){
            if(tmp1 % tmp2 == 1){
                vint.push_back(i);
                break;
            } else {
                int aa;
                aa = tmp1;
                tmp1 = tmp2;
                tmp2 = aa % tmp1;
            }
        }
    }
    for (int j = 0; j < vint.size() - 1; ++j) {
        printf("%d/%d ", vint[j], num);
    }
    printf("%d/%d", vint[vint.size() - 1], num);
    return 0;
}