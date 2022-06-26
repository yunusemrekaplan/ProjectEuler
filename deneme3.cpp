#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    string a = "x + 58 = 94 - 144";
    int size = a.length(), sum = 0, x = 0;
    char temp;
    int d[size];
    
    for(int i=0; i<size; i++) {
        temp = a[i];    
        int b = (int)temp;
        d[i] = b;
        cout << d[i] << " ";
    }


    for(int i=0; i<size; i++) {
        if(d[i] == 120) {
            i += 2;
            if(d[i] == 43) {            // toplama
                i += 3;
                if(d[i] == 32) {        // sayı tek basamaklı mı kontrol
                    i--;
                    x += d[i] - 48;
                    i += 5;
                    if(d[i] == 32) {    // sayı tek basamaklı mı kontrol
                        i--;
                        x += d[i] - 48;

                    }
                    else {              // sayı iki basamaklı mı kontrol
                        i--;
                        int temp1 = d[i] - 48;
                        i++;
                        int temp10 = d[i] - 48;
                        sum = temp10 * 10 + temp1;
                        x += sum
                    }
                }
                else {                  // sayı iki basamaklı ise
                    i--;            
                    int temp1 = d[i] - 48;
                    i++;
                    int temp10 = d[i] - 48;
                    sum = temp10 * 10 + temp1;
                    x += sum
                    i += 5;
                }
            }
            else {                     // çıkarma

            }
        }
        else if()            // + ile başlıyor
        else if()                   // - ile başlıyor
        else
    }

    
	return 0;
}
 