#include <iostream>
#include <cmath>
#include <typeinfo>
#include <conio.h>

using namespace std;



int main()
{
    int a = 1;
    int b = 4;
    double c;
    bool finish;

    for (b; b < 999; b++)
    {
        if (finish) break;
        for (a = 1; a < b; a++)
        {
            c = sqrt(pow(a, 2) + pow(b, 2));
            if (c == static_cast<int>(c))
            {
                cout << "c = " << c << " b = " << b << " a = " << a <<  endl;

                if (a + b + c == 1000)
                {
                    cout << a*b*c;
                    finish = true;
                }
            }


        }
    }

    getch();
    return 0;


    //while (a + b + c == 1000)
}
