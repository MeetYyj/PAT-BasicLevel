#include <iostream>
#include <vector>

using namespace std;

int main() {
    freopen("/home/yyj/ClionProjects/pat35/in35", "r", stdin);
    int size;
    cin >> size;

    vector<int> rec, test;
    for(int i = 0; i < size; i++){
        int temp;
        cin >> temp;
        rec.push_back(temp);
    }
    for(int i = 0; i < size; i++){
        int temp;
        cin >> temp;
        test.push_back(temp);
    }
    for(auto a : test){
        cout << a << " ";
    }
    return 0;
}