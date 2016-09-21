#include <iostream>
#include <vector>
#include <conio.h>

using namespace std;

int main()
{
    vector<int> prime_numbs;
    prime_numbs.push_back(2);
    bool prime;
//    cout << prime_numbs.capacity() << " capacity \n"
//    << prime_numbs.max_size() << " max size \n";

    for (int n = 3; n < 2000000000; n++)
    {
        prime = true;

        for (int i = 2; i < n; i++)
        {
            if (n % i == 0) prime = false;
        }

        if (prime) prime_numbs.push_back(n);
        if (prime_numbs.size() == 10001) break;
    }

//    for (int i = 0; i < prime_numbs.size(); i++)
//    {
//        cout << prime_numbs[i] << endl;
//    }

    cout << prime_numbs[10000];

    getch();
    return 0;

}
