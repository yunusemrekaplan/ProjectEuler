#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> v(5);
    v[0] = 1;
    v[1] = 3;
    v[2] = 7;
    v[3] = 3;
    v[4] = 1;

    int result = 0;
    for(int i=0; i<5; i++) {
        result ^= v[i];
    }
    cout << result;
    return 0;
}