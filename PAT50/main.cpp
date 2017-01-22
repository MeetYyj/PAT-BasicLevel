#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
//    freopen("/home/yyj/ClionProjects/PAT/PAT50/in50", "r", stdin);
    int num;
    scanf("%d\n", &num);
    vector<int> ivec;
    for (int i = 0; i < num; ++i) {
        int tmp;
        scanf("%d", &tmp);
        ivec.push_back(tmp);
    }
    sort(ivec.rbegin(), ivec.rend());
    int m = sqrt(ivec.size());
    int n;
    while(ivec.size() % m != 0){
        m++;
    }
    n = ivec.size()/m;
    if(m < n ){
        int tmp;
        tmp = n;
        n = m;
        m = tmp;
    }
    vector<vector<int>> iout(m,vector<int>(n));
    int lineTop = 0, lineBotton = m - 1, columnTop = 0, columnBottom = n - 1;
    int i =  0, j = 0;
    int cnt = 1;
    bool flg = false;
    vector<int>::iterator it = ivec.begin();
    while(1){
        for( j = columnTop; j <= columnBottom; j++){
            iout[lineTop][j] = *it;
            it++;
            if(cnt == num){
                flg = true;
                break;
            }
            cnt++;
        }
        if(flg)
            break;
        lineTop++;
        for( i = lineTop; i <= lineBotton; i++){
            iout[i][columnBottom] = *it;
            it++;
            if(cnt == num){
                flg = true;
                break;
            }
            cnt++;
        }
        if(flg)
            break;
        columnBottom--;
        for( j = columnBottom; j >= columnTop; j--){
            iout[lineBotton][j] = *it;
            it++;
            if(cnt == num){
                flg = true;
                break;
            }
            cnt++;
        }
        if(flg)
            break;
        lineBotton--;
        for( i = lineBotton; i >= lineTop; i--){
            iout[i][columnTop] = *it;
            it++;
            if(cnt == num){
                flg = true;
                break;
            }
            cnt++;
        }
        if(flg)
            break;
        columnTop++;
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if(j != 0)
                printf(" ");
            printf("%d", iout[i][j]);
        }
        printf("\n");
    }


//    for(auto a : ivec){
//        cout << a << " ";
//    }

    return 0;
};
