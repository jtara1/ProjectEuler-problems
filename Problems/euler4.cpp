// It may take a few minutes for the program to end.
#include <iostream>
#include <conio.h>
#include <vector>
#include <string>

using namespace std;

bool is_sym(int numb)
{
    vector<int> fronthalf;
    vector<int> backhalf;
    vector<int> rbackhalf; // reversed backhalf

    int last3digits = numb % 1000;
    int first3digits = numb / 1000;
    cout << first3digits << " <-- first 3 digits; " << last3digits << " <-- last 3 digits; \n";

    /* loops through to add the first 3 digits to fronthalf vector,
    and the last 3 digits to the backhalf vector */
    for (int i = 0; i <= 1; i++)
    {
        int temp_numb;
        if (i == 0) temp_numb = first3digits;
        else temp_numb = last3digits;

        int digit1 = temp_numb / 100;
        int last2 = temp_numb % 100;
        int digit2 = last2 / 10;
        int digit3 =  temp_numb % 10;

        if (i == 0)
        {
            fronthalf.push_back(digit1);
            fronthalf.push_back(digit2);
            fronthalf.push_back(digit3);
        }
        else
        {
            backhalf.push_back(digit1);
            backhalf.push_back(digit2);
            backhalf.push_back(digit3);
        }

        cout << digit1 << endl
        << digit2 << endl
        << digit3 << endl;
    }

    /* Here the backhalf vector is iterated through backwards then adds each item of the vector
    to a new vector, rbackhalf */
    vector<int>::reverse_iterator rit = backhalf.rbegin();

    for (rit; rit!= backhalf.rend(); ++rit)
    {
        rbackhalf.push_back(*rit);
    }

    cout << "Reversed backhalf contains:";
    for (vector<int>::iterator it = rbackhalf.begin(); it != rbackhalf.end(); ++it)
    cout << ' ' << *it;
    cout << '\n';

    // This makes it easy to check if the number given as a parameter was symmetrical or not.
    if (fronthalf == rbackhalf) return true;
    return false;
}

int main()
{
    int biggest_numb = 0;

    cout << "Begin: \n";
    if (is_sym(900009)) cout << "success \n";
//    if (is_sym(911119)) cout << "success \n";
//    if (is_sym(923979)) cout << "success \n";

    for (int n = 999; n > 700; n--)
    {
        for (int m = 999; m > 700; m--)
        {
            int product = n * m;
            if (is_sym(product) and product > biggest_numb)
            {
                biggest_numb = product;
            }
        }
    }
    cout << "Biggest number: " << biggest_numb;

    getch();
    return 0;
}
