#include <iostream>
#include <conio.h>
#include "ttmath/ttmath.h"

using namespace std;

int main()
{
    int counter = 1;

    ttmath::UInt<130> thousand_digit, thousand;
        thousand_digit = 10;
        thousand = 999;
        thousand_digit.Pow(thousand);

    ttmath::UInt<130> a,b,c;

        a = 0;
        b = 1;
        c = 0;

        while (c <= thousand_digit)
        {
            c = a + b;
            a = b;
            b = c;

            counter++;
        }

        cout << "Counter: " << counter << endl
        << c << endl // c is the fib numb
        << thousand_digit; // this is 10^999

    getch();
    return 0;
}
