#include <iostream>
using namespace std;
int main() {
    int str[26] ={0};
    char tmp;
//    freopen("/home/yyj/ClionProjects/PAT/PAT42/in42","r",stdin);
    int i = 0;
    while((tmp=getchar())!='\n'){
        if('a'<=tmp && tmp<='z'){
            str[tmp-'a']++;
        }
        if('A'<=tmp && tmp<='Z'){
            str[tmp-'A']++;
        }
    }
    int maxStr = 0;
    int index = 0;
    for (int j = 0; j < 26; ++j) {
        if(maxStr < str[j]){
            maxStr = str[j];
            index = j;
        }
    }
    tmp = 'a' + index;
    cout << tmp << " " << str[index];
    return 0;
}