#include <iostream>
using namespace std;
double result0;
bool islegal(char* str, int len){
    int posadd = -1, possub = -1, numi = 0, pospoint = -1, numd = 0;
    for (int i = 0; i < len; ++i) {
        if(str[i] == '+'){
            posadd = i;
            if(posadd != 0){
                return false;
            }
        } else if(str[i] == '-'){
            possub = i;
            if(possub != 0){
                return false;
            }
        } else if(str[i] >= '0' && str[i] <= '9' && pospoint == -1){
            numi++;
        } else if(str[i] == '.' && pospoint == -1){
            pospoint = i;
        } else if(str[i] >= '0' && str[i] <= '9' && pospoint != -1){
            numd++;
            if(numd > 2){
                return false;
            }
        } else{
            return false;
        }
    }
    string s = str;
    result0 = stod(s);
    return true;
}

int main() {
//    freopen("/home/yyj/ClionProjects/PAT/PAT54/in54a", "r", stdin);
    int num;
    scanf("%d\n", &num);
    int count = 0;
    double sum = 0;
    for (int i = 0; i < num; ++i) {
        char tmp[100];
        int j = 0;
        while (tmp[j] = getchar()){
            if(tmp[j] == ' ' || tmp[j] == '\n'){
                break;
            }
            j++;
        }
        tmp[j] = '\0';
        if(islegal(tmp, j)){
            if(result0 <=1000 && -1000 <= result0){
                sum += result0;
                count++;
            } else{
                printf("ERROR: %s is not a legal number\n", tmp);
            }
        } else {
            printf("ERROR: %s is not a legal number\n", tmp);
        };
    }
    if(count == 0){
        printf("The average of 0 numbers is Undefined");
    } else if(count == 1){
        printf("The average of %d number is %.2lf", count, sum/(double)count);
    } else {
        printf("The average of %d numbers is %.2lf", count, sum/(double)count);
    }
    return 0;
}