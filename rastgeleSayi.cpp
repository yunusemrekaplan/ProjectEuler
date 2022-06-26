#include <iostream>
#include <time.h>
#include <vector>

using namespace std;

int main() {
    int s1,s2,rnd;
    cout << "Taban sayisini giriniz: ";
    cin >> s1;
    cout << "Tavan sayisini giriniz(cikmak icin 0'dan kucuk girin): ";
    cin >> s2;

    vector<int> v;
    srand(time(NULL));
    for(int i=0; i<s2-s1; i++) {
        rnd = s1+rand() % (s2-s1);
        v.push_back(rnd);
    }
    int temp;
    for(int i=0; i<s2-s1; i++) {
        for(int j=0; j<s2-s1; j++) {
            if(v[i] < v[j]) {
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }

    for(int i=0; i<s2-s1; i++) {
        cout << v[i] << " ";
    }

    return 0;
}