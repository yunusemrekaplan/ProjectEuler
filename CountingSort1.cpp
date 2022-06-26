/*
Another sorting method, the counting sort, does not require comparison.
Instead, you create an integer array whose index range covers the entire range of values in your array to sort.
Each time a value occurs in the original array, you increment the counter at that index.
At the end, run through your counting array, printing the value of each non-zero valued index that number of times.
*/
/*
Example;

arr = {1,1,3,2,1};
a = {0,0,0,0,0};
a = {0,3,1,1,0}
*/

#include<iostream>
#include<vector>

using namespace std;

vector<int> countingSort(vector<int> arr) {
    vector<int> a(100,0);
    int n = arr.size();
    int temp;
    for(int i=0; i<n; i++) {
        temp = arr[i];
        a[temp]++;
    }
    return a;
}

int main() {
    vector<int> arr(10);
    for(int i=0; i<10; i++) {
        cin >> arr[i];
    }

    vector<int> a = countingSort(arr);
    for(int i=0; i<10; i++) {
        cout << a[i] << " ";
    }



}