#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

int main()
{
    int sum1 = 0;
    int sum2 = 0;
    int diff;

    for (int i = 1; i <= 100; i++)
    {
        sum1 += pow(i, 2);
        sum2 += i;
    }

    sum2 *= sum2; // pow(sum2, 2) was giving the correct result minus 1
    diff = sum2 - sum1;
    cout << diff << " = " << sum2 << " - " << sum1;

    getch();
    return 0;
}
