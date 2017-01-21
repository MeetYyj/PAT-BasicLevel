#include <iostream>
#include <vector>

using namespace std;

bool isSame(vector<int> &a, vector<int> &b){
    for(int i = 0 ; i <= a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

bool isInsertSort(vector<int> &a, vector<int> &sa, int size){
    vector<int> vtmp(a);
    bool flg = false;
    int i;
    for(i = 1; i < size && !flg; ++i){
        flg = true;
        int tmp = vtmp[i];
        int j;
        for (j = i - 1; j >= 0 && tmp < vtmp[j]; j--) {
            vtmp[j+1] = vtmp[j];
        }
        vtmp[j+1] = tmp;
        for(int k = 0; k < size; k++){
            if(vtmp[k] != sa[k])
                flg = false;
        }
    }


    if(flg){
        int tmp = vtmp[i];
        printf("Insertion Sort\n");
        int j;
        for (j = i - 1; j >= 0 && tmp < vtmp[j]; j--) {
            vtmp[j+1] = vtmp[j];
        }
        vtmp[j+1] = tmp;
        for(int k = 0; k < size - 1; k++){
            printf("%d ", vtmp[k]);
        }
        printf("%d", vtmp[size - 1]);
        return true;
    } else {
        return  false;
    }

}

void merge(vector<int> &x, vector<int> &y, int startOfFirst, int endOfFirst, int endOfSecond) {
    int first = startOfFirst;
    int second = endOfFirst + 1;
    int result = startOfFirst;
    while (first <= endOfFirst && second <= endOfSecond) {
        if (x[first] <= x[second]) {
            y[result++] = x[first++];
        } else {
            y[result++] = x[second++];
        }
    }
    if (first > endOfFirst) {
        for (int i = second; i <= endOfSecond; i++) {
            y[result++] = x[i];
        }
    } else {
        for (int i = first; i <= endOfFirst; i++) {
            y[result++] = x[i];
        }
    }
}

void mergePass(vector<int> &x, vector<int> &y, int size, int segmentSize){
    int i = 0;
    while(i <= size - 2*segmentSize){
        merge(x, y, i, i+segmentSize-1, i+2*segmentSize-1);
        i += 2*segmentSize;
    }
    if(i + segmentSize < size){
        merge(x, y, i, i+segmentSize-1, size-1);
    } else {
        for(int j = i; j < size; j++){
            y[j] = x[j];
        }
    }
}



bool isMergeSort(vector<int> &a, vector<int> &sa, int size){
    vector<int> vtmp(a), mergetmp(a);
//    for(auto aa : a){
//        cout << aa << " ";
//    }
//    cout << endl;
    int segmentSize = 1;
    bool flg = false;
    while(segmentSize < size && !flg){
        flg = true;
        mergePass(mergetmp, vtmp, size, segmentSize);
        segmentSize += segmentSize;
        for(int k = 0; k < size; k++){
            if(vtmp[k] != sa[k])
                flg = false;
        }
        mergetmp = vtmp;
    }

    if(flg){
        printf("Merge Sort\n");
        mergePass(mergetmp, vtmp, size, segmentSize);
        for(int k = 0; k < size - 1; k++){
            printf("%d ", vtmp[k]);
        }
        printf("%d", vtmp[size - 1]);
        return true;
    } else {
        return false;
    }

}

int main() {
//    freopen("/home/yyj/ClionProjects/PAT/PAT35/in35a", "r", stdin);
    int size;
    scanf("%d", &size);
    vector<int> ivecO, ivecS;
    for(int i = 0; i < size; i++){
        int tmp;
        scanf("%d", &tmp);
        ivecO.push_back(tmp);
    }
    for(int i = 0; i < size; i++){
        int tmp;
        scanf("%d", &tmp);
        ivecS.push_back(tmp);
    }
    isInsertSort(ivecO, ivecS, size);

    isMergeSort(ivecO, ivecS, size);
//    for(auto a : ivecO){
//        cout << a << " ";
//    }


    return 0;
}