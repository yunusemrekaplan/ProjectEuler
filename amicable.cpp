#include <iostream>
using namespace std;

int bolenleriniTopla(int sayi2) {
    int sum = 0;

    for(int i=1; i<sayi2; ++i) {
        if(sayi2 % i == 0) {
            sum += i;
        }
    }
    return sum;
}


int main() {
    int sayi1,sayi2;
    int sum = 0;

    for(sayi2=1; sayi2<10000; sayi2++) {
        sayi1 = bolenleriniTopla(sayi2);
        if (bolenleriniTopla(sayi1) == sayi2) {
            if(sayi1 != sayi2) {
                cout << sayi2 << ": " << sayi1 << endl;
                sum = sum + sayi2;
            }
        }
            
    }
    cout << sum;
    
    return 0;
}