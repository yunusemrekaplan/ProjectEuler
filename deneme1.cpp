#include <iostream>
#include <string>
using namespace std;

int main ()
{
  int size;
  cin >> size;
  int d[size];
  for(int i=0; i<size; i++) {
    cin >> d[i];
  }
  for(int i=0; i<size; i++) {
    cout << d[i] << endl;
  }
  return 0;
}