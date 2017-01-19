#include <iostream>
using namespace std;
int main() {
//    freopen("/home/yyj/ClionProjects/PAT/PAT46/in46", "r", stdin);
    int num;
    cin >> num;
    int jia = 0, yi = 0;
    for (int i = 0; i < num; ++i) {
        int jiahua, jiahan, yihua, yihan;
        scanf("%d %d %d %d", &jiahua, &jiahan, &yihua, &yihan);
        int sum = jiahua + yihua;
        if(sum == jiahan && sum!= yihan){
            yi++;
        } else if(sum != jiahan && sum == yihan){
            jia++;
        }
    }
    cout << jia << " " << yi << endl;
    return 0;
}