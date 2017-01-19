#include <iostream>
using namespace std;
int main() {
    freopen("/home/yyj/ClionProjects/PAT/PAT48/in48", "r", stdin);
    char a[101], b[101], c[101];
    char other[4] = {'J', 'Q', 'K'};
    int al= 0, bl = 0, cl = 0;
    while((a[al] = getchar()) != ' '){
        al++;
    }
    a[al] = '\0';
    while((b[bl] = getchar()) != '\n'){
        bl++;
    }
    b[bl] = '\0';
    if(bl >= al){
        cl = bl;
    } else {
        cl = al;
    }
    c[cl] = '\0';
    int j = al - 1;
    int k = cl - 1;
    for(int i = bl - 1; i >= 0; i--){
        if(j >= 0){
            if((bl - i)%2){
                int yushu = ((b[i] - '0') + (a[j] - '0'))%13;
                if(yushu < 10){
                    c[k] = yushu + '0';
                } else {
                    c[k] = other[yushu - 10];
                }
            } else {
                int cha = b[i] - a[j];
                if(cha < 0){
                    cha += 10;
                }
                c[k] = cha + '0';
            }
            j--;
        }
        else{
            c[k] = b[i];
        }
        k--;
    }
    while(j>=0){
        if((cl - k)%2 == 1){
            c[k] = a[j];
        }else {
            if(a[j] == '0'){
                c[k] = '0';
            } else {
                c[k] = '0' - a[j] + 10 +'0';
            }
        }
        k--;
        j--;
    }
    printf("%s\n", c);
    return 0;
}