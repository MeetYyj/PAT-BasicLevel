#include <iostream>
#include <string>
using namespace std;

int main() {
    string input, in2put, result;
    cin >> input >> in2put;
    int input1,input2,input3,in2put1,in2put2,in2put3,result1,result2,result3;
    size_t find1 = input.find(".");
    input1 = stoi(input.substr(0,find1));
    size_t find2 = input.find(".", find1+1);
    input2 = stoi(input.substr(find1+1, find2-find1-1));
    input3 = stoi(input.substr(find2+1, input.length()-find2-1));
//    cout << input1 << "." << input2 << "." << input3 << endl;
    size_t find3 = in2put.find(".");
    in2put1 = stoi(in2put.substr(0,find3));
    size_t find4 = in2put.find(".", find3+1);
    in2put2 = stoi(in2put.substr(find3+1, find4-find3-1));
    in2put3 = stoi(in2put.substr(find4+1, in2put.length()-find4-1));
//    cout << in2put1 << "." << in2put2 << "." << in2put3 << endl;

    if(in2put1>input1 ||
            (in2put1==input1 && in2put2>input2) ||
            (in2put1==input1 && in2put2==input2 && in2put3>=input3)){
        result3 = in2put3 - input3;
        if(result3 < 0){
            result3 += 29;
            in2put2--;
        }
        result2 = in2put2 - input2;
        if(result2 < 0){
            result2 += 17;
            in2put1--;
        }
        result1 = in2put1 - input1;
        cout << result1 << "." << result2 << "." << result3 << endl;
    } else {
        result3 = input3 - in2put3;
        if(result3 < 0){
            result3 += 29;
            input2--;
        }
        result2 = input2 - in2put2;
        if(result2 < 0){
            result2 += 17;
            input1--;
        }
        result1 = input1 - in2put1;
        cout << "-" << result1 << "." << result2 << "." << result3 << endl;
    }

    return 0;
}