#include<iostream>
#include<vector>

using namespace std;

bool compare(vector<int> array, vector<int> subarray);

int main() {
    vector<int> array;
    vector<int> subarray;
    int temp, size1, size2;
    
    cout << "Please enter main array." << endl;
    cout << "How many elements in array?: ";
    cin >> size1;
    
    for(int i=0; i<size1; i++) {
        cin >> temp;
        array.push_back(temp);
    }  
    
    cout << "Main array: ";
    
    for(int i=0; i<size1; i++) {
        cout << array[i] << " ";
    }
    
    cout << endl;
    cout << "How many elements in subarray?: ";
    cin >> size2;
    if(size2 > size1) {cout << "The size of the subarray cannot be greater than the main array"; return 0;}
    cout << "Please enter subarray: ";
    
    for(int i=0; i<size2; i++) {
        cin >> temp;
        subarray.push_back(temp);
    }
    
    if(compare(array, subarray) == 1) cout << "Yes";
    else cout << "No";

    return 0;
}

bool compare(vector<int> array, vector<int> subarray) {
    int control = 0;
    for(int i=0; i<subarray.size(); i++) {
        for(int j=0; j<array.size(); j++) {
            if(subarray[i] == array[j]) {
                control = 1;
                break;
            }
        }
        if(control != 1) return false;
        control = 0;
    }

    return true;

}

