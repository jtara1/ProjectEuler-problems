#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    bool found = false;

    for (int n = 20; n <= 2000000000; n++)
    {
        if (found) break;

        for (int i = 20; i >= 1; i--)
        {
            if (n % i != 0)
            {
                break;
            }
            if (i == 1)
            {
                cout << n << endl;
                found = true;
            }
        }
        //if (n % 1000000 == 0) cout << n << endl; // shows progression after 1 million
    }

    cout << "end";

    getch();
    return 0;
}
