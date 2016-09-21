// Note: This program will take ~30 minutes to end

#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

int main()
{
    vector<int> factors;
    bool numb_found = false;
    int n = 0;
    int triangle_numb;
    
    while (!numb_found)
    {
        factors.clear();
        n++;
        triangle_numb = (n * ( n + 1)) / 2;
        
        for (int i = 1; i <= triangle_numb; i++)
        {
            if (triangle_numb % i == 0) factors.push_back(i);
        }
        
        cout << "Triangular number: " << triangle_numb << endl;
        
        if (factors.size() >= 500) numb_found = true;
    }
    cout << "Triangular number: " << triangle_numb << endl
    << "Factors: " << factors.size() << endl;
        
    getch();
    return 0;
}
