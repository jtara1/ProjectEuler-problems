#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int n = 0;
    int total = 0;
    for (int i = 0; i < 1000; i++)
        if (i % 3 == 0) total += i;
        else if (i % 5 == 0) total += i;
    cout << total;
    getch();
    return 0;
}
