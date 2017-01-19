#include <iostream>
using namespace std;
int main() {
    char tmp;
    int num[6] ={0};
    int cnt = 0;
    freopen("/home/yyj/ClionProjects/PAT/PAT43/in43","r",stdin);
    while((tmp=getchar())!='\n'){
        switch(tmp){
            case 'P':{
                num[0]++;
                break;
            }
            case 'A':{
                num[1]++;
                break;
            }
            case 'T':{
                num[2]++;
                break;
            }
            case 'e':{
                num[3]++;
                break;
            }
            case 's':{
                num[4]++;
                break;
            }
            case 't':{
                num[5]++;
                break;
            }
            default: {
                break;
            }
        }
    }
    for (int i = 0; i < 6; ++i) {
        cnt += num[i];
    }
    while(cnt!=0){
        if(num[0]!=0){
            printf("P");
            num[0]--;
            cnt--;
        }
        if(num[1]!=0){
            printf("A");
            num[1]--;
            cnt--;
        }
        if(num[2]!=0){
            printf("T");
            num[2]--;
            cnt--;
        }
        if(num[3]!=0){
            printf("e");
            num[3]--;
            cnt--;
        }
        if(num[4]!=0){
            printf("s");
            num[4]--;
            cnt--;
        }
        if(num[5]!=0){
            printf("t");
            num[5]--;
            cnt--;
        }
    }

    return 0;
}