// Note: Using integer to count chain length: 3min, 35sec
// Note: Using vectors to store each chain value then check vector sizes: 3min, 44sec

#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
    int chain_counter;
    int biggest_chain = 0;
    int biggest_chain_init = 0;

    for (long long init = 1LL; init < 1000000; init++)
    {
        long long n = init;
        chain_counter = 0;
        chain_counter++;
        while (n != 1)
        {
            if (n % 2 == 0) n /= 2;
            else n = n * 3 + 1;
            chain_counter++;
//            cout << "New chain value: " << n << endl;
        }

        cout << "Current iteration: " << init << endl;

        if (chain_counter > biggest_chain)
        {
            biggest_chain = chain_counter;
            biggest_chain_init = init;
        }

    }
    cout << "Biggest Chain size: " << biggest_chain << endl;
    cout << "Biggest Chain init numb: " << biggest_chain_init << endl;

    getch();
    return 0;
}
