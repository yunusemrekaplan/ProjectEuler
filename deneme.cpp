#include<iostream>
#include<vector>

using namespace std;

int asalFonk(int n);

int main() {
    int n;
    cout << "F(x) is the function that returns the xth prime number." << endl;
    cout << "Please enter the x: ";
    cin >> n;

    cout << "F("<<n<<"): " << asalFonk(n); 

    return 0;
}

int asalFOnk(int n) {
    vector<int> prime(n);
    prime[0] = 2;
    int number = 4, control = 1;
    for(int i=1; i<n; i++) {
        for(int j=3; j<number; j++) {
            for(int k=2; k<j; k++) {
                if(j % k == 0) {
                    control = 0;
                    break;
                }
            }
            if(control == 1) prime[i] = j;
            control = 1;
        } 
    }
    return prime[n-1];
}