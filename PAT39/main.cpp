#include <iostream>
using namespace std;

int main() {
    char in1str[1000], in2str[1000];
    int a[62]={0}, b[62]={0};
//    scanf("%s", &in1str);
//    scanf("%s", &in2str);
    int i = 0;
    while((in1str[i]=getchar())!= '\n'){
        if('0'<=in1str[i]  && in1str[i]<='9'){
            a[in1str[i]-'0']++;
        } else if('a'<=in1str[i] && in1str[i]<='z'){
            a[in1str[i]-'a'+10]++;
        } else{
            a[in1str[i]-'A'+36]++;
        }
        i++;
    }
    int j = 0;
    while((in2str[j]=getchar())!= '\n'){
        if('0'<=in2str[j] && in2str[j]<='9'){
            b[in2str[j]-'0']++;
        } else if('a'<=in2str[j] && in2str[j]<='z'){
            b[in2str[j]-'a'+10]++;
        } else{
            b[in2str[j]-'A'+36]++;
        }
        j++;
    }
    bool flg = true;
    int count = 0;
    for (int l = 0; l < 62; ++l) {
        if(a[l] < b[l]){
            count += (b[l] - a[l]);
            flg = false;
        }
    }
    if(flg){
        cout << "Yes " << i - j;
    } else {
        cout << "No " << count;
    }

    return 0;
}