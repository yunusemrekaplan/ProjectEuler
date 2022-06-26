#include <iostream>

using namespace std;

/*
Story
You and a group of friends are earning some extra money in the school holidays by re-painting the numbers on people's letterboxes for a small fee.

Since there are 10 of you in the group each person just concentrates on painting one digit! For example, somebody will paint only the 1's, somebody else will paint only the 2's and so on...

But at the end of the day you realise not everybody did the same amount of work.

To avoid any fights you need to distribute the money fairly. That's where this Kata comes in.
*/

int main() {
    int start,end;

    cout << "enter the start: ";
    cin >> start;

    cout << "enter the end: ";
    cin >> end;

    int i,j=0,k;
    i = start;
    int size = end - start + 1;
    int numbers[size];
    while(i<=end) {
        numbers[j] = i;
        i++;
        j++;
    }
    int numbers1[10] = {0,0,0,0,0,0,0,0,0,0};
    int temp;
    for(i=0; i<size; i++) {
        for(j=0; numbers[i]!=0; j++) {
            temp = numbers[i] % 10;
            numbers[i] = numbers[i] / 10;
            switch(temp) {
                case 0: numbers1[0]++;
                break;
                case 1: numbers1[1]++;
                break;
                case 2: numbers1[2]++;
                break;
                case 3: numbers1[3]++;
                break;
                case 4: numbers1[4]++;
                break;
                case 5: numbers1[5]++;
                break;
                case 6: numbers1[6]++;
                break;
                case 7: numbers1[7]++;
                break;
                case 8: numbers1[8]++;
                break;
                case 9: numbers1[9]++;
                break;
            }
        }
    }

    for(i=0; i<10; i++) {
        cout << i << ": " << numbers1[i] << endl;
    }

return 0;  
}