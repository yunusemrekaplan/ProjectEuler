#include<iostream>
#include<cstring>
#include<sstream>
using namespace std;

std::string duplicate_encoder(const std::string& word){
    string a = word;
    string b;
    int control = 1;
    int a1 = a.length();

    for(int i=0; i<a1; i++) {
        for(int j=0; j<a1; j++) {
            if(i == j) j++;
            if(toupper(a[i]) == toupper(a[j])) {
                control = 0;
            }
        }
        if(control == 1) {
            b += "(";
        }
        else b += ")";

        control = 1;
    } 
  
    return b;
}

int main() {
    string a = "Success";
    string b = duplicate_encoder(a);
    cout << b;

    return 0;
}