#include <iostream>
using namespace std;

int main(){
    int total[3];
    int count[3] = {20,10,15};
    int count1[3] = {20,10,15};
    int count2[3] = {20,10,15};

    for (int i = 0; i < 3; i++){
        total[i] = count[i]*2 + count1[i]*2 + count2[i]*2;
        cout << total[i] << endl;
    }
}