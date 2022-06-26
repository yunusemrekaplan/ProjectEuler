#include <iostream>
using namespace std;

/*örn:
01 02 03 04 05
16 17 18 19 06
15 24 25 20 07
14 23 22 21 08 
13 12 11 10 09



    */
int matrix() {
    int size = 5, counter = 0;
    int matrix[size][size];
    int n = size, nn = n / 2, k = 1, l;
    
    for(int i=0; i<nn; i++) {
        for(int j=i; j<n-i; j++) {
            matrix[i][j] = ++counter;                           //cout << "i: " << i << " j: " << j << ": "<< matrix[i][j] << " ";
            cout << matrix[i][j] << endl;
        }
        for(int j=i+1; j<n-i; j++) {
            matrix[j][size - i - 1] = ++counter;
            cout << matrix[j][size-1-i] << endl;
        }
        for(int j=size-1-k; j>=i; j--) {
            matrix[size-k][j] = ++counter;
            cout << matrix[size-k][j] << endl;
        }
        l = i;
        if(i == 0) {
            for(int j=size-1-k; j>0; j--) {
            matrix[j][i] = ++counter;
            cout << matrix[j][i] << endl;
            }
        }
        else {
            for(int j=size-1-k; j>0; j--) {
            matrix[j][l] = ++counter;
            cout << matrix[j][l] << endl;
            l++;
            }
        }
        k++;
    }
    //matrix[nn][nn] = size * size;
    
    for(int i=0; i<size; i++) {
        for(int j=0; j<size; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

return 0;
}

int main() {
    matrix();
    return 0;
}