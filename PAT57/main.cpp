#include <iostream>
using namespace std;
int main() {
//    freopen("/home/yyj/ClionProjects/PAT/PAT57/in57", "r", stdin);
    char tmp;
    int sum = 0;
    while((tmp = getchar()) != '\n'){
        if('a' <= tmp && tmp <= 'z'){
            sum += (tmp - 'a' + 1);
        } else if('A' <= tmp && tmp <= 'Z'){
            sum += (tmp - 'A' + 1);
        }
    }
    int cnt0 = 0, cnt1 = 0;
    while (sum!= 0){
        if(sum % 2){
            cnt1++;
        } else{
            cnt0++;
        }
        sum /= 2;
    }
    cout << cnt0 << " " << cnt1 << endl;
    return 0;
}