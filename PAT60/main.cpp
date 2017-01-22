#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
//    freopen("/home/yyj/ClionProjects/PAT/PAT60/in60", "r", stdin);
    int num;
    scanf("%d\n", &num);
    int maxMail = 0;
    vector<int> ivec;
    for (int i = 0; i < num; ++i) {
        int tmp;
        scanf("%d", &tmp);
        ivec.push_back(tmp);
    }
    sort(ivec.rbegin(), ivec.rend());
    int count = 1;

    for(int i = 0; i < ivec.size(); i++){
//        cout << i << " " << "count:" << count << "ivec:" << ivec[i] << endl;
        if(count >=  ivec[i]- 1){
            printf("%d", ivec[i] - 1);
            break;
        }
        count++;
    }
    return 0;
}