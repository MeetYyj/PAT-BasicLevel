#include <iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    int sum = 0;
    for (int i = 0; i < num; ++i) {
        int tmp;
        cin >> tmp;
        sum += (num - 1) * (tmp * 10 + tmp);
    }
    cout << sum << endl;
    return 0;
}