#include<iostream>

using namespace std;

bool palindrom(string& str) {
    string str1 = str;
    int a1 = str.length();
    int j = a1-1;
    for(int i=0; i<a1; i++) {
        str1[i] = str[j];
        j--;
    }
    if(str1 == str) {
        return true;
    }
    else return false;
}

int main() {
    string str;
    cin >> str;
    
    bool a = palindrom(str);
    cout << a;


    return 0;
}