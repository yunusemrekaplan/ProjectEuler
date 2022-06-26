#include<iostream>
#include<cstring>
#include<sstream>
#include <map>
#include <string>
#include <vector>
#include <utility>
using namespace std;

int main() {
    /*
    vector <int> v1;
    cout << v1.size() << endl;

    v1.push_back(1);                // push_back(x) vectorun sonuna x elemanını ekler.
    cout << v1.size() << endl;
    cout << v1[0] << endl;
    v1.push_back(-1);
    cout << v1.size() << endl;
    cout << v1[1] << endl;

    cout << endl;
    vector <int> v2(10);
    for(int i=0; i<10; i++) {
        cout << v2[i] << " ";
    }

    cout << endl;
    vector <int> v3(10,-3);
    for(int i=0; i<10; i++) {
        cout << v3[i] << " ";
    }

    cout << endl;
    vector <int> v4;
    v4.assign(5,44);                // assign(x,y) içinde x kadar y olan vector yaratır.
    for(int i=0; i<5; i++) {
        cout << v4[i] << " "; 
    }
    v4[4] = 55;

    cout << endl;
    int x = v4.back();              // back() vectorun son elemanını yazdırır.
    cout << x;

    cout << endl;

    vector <float> v5;
    float b = 0;
    while(b != -1) {
        cout << "Enter a number(enter -1 to stop): ";
        cin >> b;
        v5.push_back(b);
    }
    v5.pop_back();                  // pop_back() vectordeki en son elemanı siler.

    float sum = 0, c;
    while(!v5.empty()) {            // empty() == vecktor boş mu, !empty() == vector boş değil mi?
        c = v5.back();
        sum = sum + c;
        v5.pop_back();
    }              
*/

// vectorun ilk elemanini silmek.
    vector <int> v(4);
    v[0] = 5;
    v[1] = 1;
    v[2] = 2;
    v[3] = 7;    
    
    /*for(int i=0; i<v.size()-1; i++) {
        swap(v[i], v[i+1]);
        //v[i] = move(v.back());
    }*/
    v[2] = move(v.back());
    v.pop_back();
    //v.push_back(999);
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }

    


    cout << endl;

    return 0;
}