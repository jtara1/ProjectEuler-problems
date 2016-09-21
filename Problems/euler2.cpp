#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int init = 1;
    int reused_numb = 1;
    int new_numb = 0;
    int total = 0;

    while (new_numb < 4000000)
        {
        new_numb = init + reused_numb;
        if (new_numb % 2 == 0) total += new_numb;
        init = reused_numb;
        reused_numb = new_numb;
        }
    cout << total;
    getch();
    return 0;
}
