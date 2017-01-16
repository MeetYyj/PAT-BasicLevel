#include <iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    char chr;
    cin >> chr;
    for(int i=0; i<(num+1)/2; ++i){
        if(i==0 || i==(num+1)/2-1){
            for(int j=0; j<num; ++j){
                cout << chr;
            }
            cout << endl;
        } else {
            cout << chr;
            for(int j=0; j<num-2; ++j){
                cout << " ";
            }
            cout << chr << endl;
        }
    }
    return 0;
}