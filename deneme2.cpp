#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    string a = "&z _upon 407298a --- ???ry, ww/100 I thought, 631str*ng and w===y -721&()";
    string res = "";
    int sum = 0, temp = 0, num = 0, all = 0;
    int size = a.length();
    int d[size];
    char c;
    for(int i=0; i<size; i++) {
        c = a[i];    
        int b = (int)c;
        d[i] = b;
        //cout << d[i] << " ";
    }

    for(int i=0; i<size; i++) {
        if(d[i] > 47 && d[i] < 58) {                    // tek basamak kontrolü
            i++;
            if(d[i] > 47 && d[i] < 58) {                // iki basamak kontrolü
                i++;
                if(d[i] > 47 && d[i] < 58) {            // üç basamak kontrolü
                    num = 0; temp = 0;         
                    temp += (d[i] - 48) * (d[i] - 48) * (d[i] - 48);
                    num  += (d[i] - 48) * 1;  i--;
                    temp += (d[i] - 48) * (d[i] - 48) * (d[i] - 48);
                    num  += (d[i] - 48) * 10; i--;
                    temp += (d[i] - 48) * (d[i] - 48) * (d[i] - 48);
                    num  += (d[i] - 48) * 100;
                    sum  = temp;
                    temp = 0;
                    if(num == sum) {
                        c = (char)d[i];
                        res += c; i++; 
                        c = (char)d[i];
                        res += c; i++; 
                        c = (char)d[i];
                        res += c; res += " "; 
                        all += num;
                    }
                    num = 0;
                }
                else {
                    i--;
                    temp += (d[i] - 48) * (d[i] - 48) * (d[i] - 48);
                    num  += (d[i] - 48) * 1; i--;
                    temp += (d[i] - 48) * (d[i] - 48) * (d[i] - 48);
                    num  += (d[i] - 48) * 10;
                    sum  = temp;
                    temp = 0;
                    if(num == sum) {
                        c = (char)d[i];
                        res += c; i++; 
                        c = (char)d[i];
                        res += c; res += " "; 
                        all += num;
                        cout << "ikili num-sum:" << num << "-" << sum << endl; 
                    }
                    num = 0;
                }
            }
            else {
                i--;
                temp += (d[i] - 48) * (d[i] - 48) * (d[i] - 48);
                num  += (d[i] - 48) * 1;
                sum = temp;
                temp = 0;
                if(num == sum) {
                    c = (char)d[i];
                    res += c; res += " "; 
                    all += num;
                    cout << "birli num-sum:" << num << "-" << sum << endl;
                }
                num = 0;
            }
        }
    }  
    string dd;
    stringstream ss;
    ss << all;
    ss >> dd;

    if(res != "") {
        res += dd;
        res += " Lucky";
    }
    else res = "Unlucky";

    cout << res << endl;

	return 0;
}
 