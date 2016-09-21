#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

// assumes that numb2 is the sum of the proper divisors of numb1
bool amic_pair(int numb1, int numb2)
/** Returns true if numb2 is a valid amicable pair of numb1 */
{
    int sum2 = 0;
    for (int i = 1; i < numb2; i++)
    {
        if (numb2 % i == 0) sum2 += i;
    }

    if (sum2 == numb1) return true;
    return false;
}

int main ()
/** Adds the sum of all proper divisors for each numb then checks if amicable pair was found */
{
    int sum;
    vector<int> amicable_numbs;

    for (int i = 1; i < 10000; i++)
    {
        sum = 0;

        // if the 2nd number of the pair is encountered, it'll move on to check the next numb
        for (int indx = 0; indx < amicable_numbs.size(); indx++)
        {
            if (i == amicable_numbs[indx]) i++;
        }

        // proper divisors added to sum here
        for (int n = 1; n < i; n++)
        {
            if (i % n == 0)
            {
                sum += n;
                //cout << "Sum updated: " << sum << endl; // debug
            }
        }

        if (amic_pair(i, sum))
        {
            if (i != sum)
            {
                amicable_numbs.push_back(i);
                amicable_numbs.push_back(sum);
                cout << "Added: " << i << endl << "Added: " << sum << endl; // debug
            }
        }
    }

    int total_sum = 0;
    for (int indx = 0; indx < amicable_numbs.size(); indx++)
    {
        total_sum += amicable_numbs[indx];
    }

    cout << total_sum;

    getch();
    return 0;
}
