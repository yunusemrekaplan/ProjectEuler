#include<iostream>
using namespace std;

int main() {
    int a[10] =  {94,7,4,546,41,98,43,5,2,68};
    int i,j,k;
    int temp;
    int max = a[0];
    k = 1;
    
    for(i=0; i<10; ++i) {
        for(j=0; j<10; ++j) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    
    for(int b=0; b<10; b++) {
        cout << a[b] << endl;
    }

    return 0;
}