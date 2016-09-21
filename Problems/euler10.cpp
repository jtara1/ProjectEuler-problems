// Note: This program will take ~2 hours to end.

#include <iostream>
#include <vector>
#include <conio.h>

using namespace std;

int main(){
    vector<int> prime_numbs;
    int main_numb = 2000000;
    long long total = 0LL;
    bool isprime;

    // iterate through every integer until main_numb
    for (int n = 2; n < main_numb; n++)
    {
        // assume every numb is prime until proven later in loop
        isprime = true;
        // checks if n is prime or not
        for (int i = 2; i < n; i++)
            {if (n % i == 0) isprime = false;}
        if (isprime)
        {
            cout << "Prime added: " << n << endl;
            total += n;
            //prime_numbs.push_back(n);

        }

    }
    cout << "Total = " << total;
    getch();
    return 0;
}
