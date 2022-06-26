#include<iostream>

using namespace std;

int main() {
    char abc[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char a;
    int satir;
    cout << "Please enter a character: ";
    cin >> a;
    
    for(int i=0; i<27; i++) {
        if(a == abc[i]) {
            satir = i+1;
            break;
        } 
    }

    int charSayi = 1, j;
    for(int i=0; i<satir; i++) {
        for(j=0; j<charSayi; j++) {
            cout << abc[j];
        }
        for(int k=j-2; k>=0; k--) {
            cout << abc[k];
        }
        cout << endl;
        charSayi++;
    }



    return 0;
}