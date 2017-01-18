#include <iostream>
using namespace std;
int main() {
    char instr[100000];
    int i = 0;
    int cntp = 0, cntpa = 0, cntpat = 0;
    while((instr[i]=getchar())!='\n'){
        if(instr[i]=='P'){
            cntp++;
        } else if(instr[i]=='A') {
            cntpa += cntp;
        } else{
            cntpat += cntpa;
            cntpat %= 1000000007;
        }
        i++;
    }
    cout << cntpat;
    return 0;
}