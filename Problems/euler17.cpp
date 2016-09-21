#include <iostream>
#include <conio.h>
#include <string>
#include <map>

using namespace std;


/** Takes an integer and returns the length of the letters of the name of the number
    Expects a number equal to or less than 9,999 */
int get_str_return_length(int numb)
{
    map<int, string> dict;
    map<int, string>::iterator dict_iteration;

    // Below is every number 1 to 19 attached to its word translation in this map
    dict[1] = "one";    dict[2] = "two";    dict[3] = "three";  dict[4] = "four";   dict[5] = "five";
    dict[6] = "six";    dict[7] = "seven";    dict[8] = "eight";    dict[9] = "nine";    dict[10] = "ten";
    dict[11] = "eleven";    dict[12] = "twelve";    dict[13] = "thirteen";    dict[14] = "fourteen";    dict[15] = "fifteen";
    dict[16] = "sixteen";    dict[17] = "seventeen";    dict[18] = "eighteen";    dict[19] = "nineteen";
    // Below is enough for every ten numbers above nineteen
    dict[20] = "twenty";   dict[30] = "thirty";   dict[40] = "forty";    dict[50] = "fifty";    dict[60] = "sixty";
    dict[70] = "seventy";   dict[80] = "eighty";   dict[90] = "ninety";

    int letter_counter = 0;
    string words_of_numb = "";
    bool add_and = false;

    // handles numbers 9,999 to 1
    if (numb < 10000)
    {
        int last_three_digits = numb % 1000;
        int last_two_digits = numb % 100;
        int last_digit = numb % 10;

        int first_digit = numb / 1000;
        int second_digit = last_three_digits / 100;
        int last_two_round_down = last_two_digits - last_digit;

        // Handles low numbers that won't process properly through the variables above
        if (numb <= 19)
        {
            last_digit = numb;
        }

        // If the last two digits are <= 19, I don't need to find the last digit name
        if (last_two_digits <= 19)
        {
            last_digit = last_two_digits;
            last_two_round_down = 0;
        }

        if ((last_two_round_down != 0 or last_digit != 0) and numb > 100) add_and = true; // adds the word "and" to the string, words_of_numb if there are any numbers at the last two digit spots

        /* iterates through map of numbs and checkers each digit for word equivalent
            note: it may not put in proper reading order, but it does not matter for Euler problem 17 */
        for (dict_iteration = dict.begin(); dict_iteration != dict.end(); ++dict_iteration)
        {
            if (first_digit == dict_iteration->first)
            {
                words_of_numb += dict_iteration->second;
                words_of_numb += "thousand";
            }
            if (second_digit == dict_iteration->first)
            {
                words_of_numb += dict_iteration->second;
                words_of_numb += "hundred";
            }
            if (last_two_round_down == dict_iteration->first) words_of_numb += dict_iteration->second;
            if (last_digit == dict_iteration->first) words_of_numb += dict_iteration->second;

        }

         if (add_and) words_of_numb += "and";

    }
    cout << "Current string: " << words_of_numb << " " << words_of_numb.size() << endl;
    return words_of_numb.size();

}

int main()
{
    int total = 0; // total length of all strings

    for (int i = 1000; i >= 1; i--)
    {
        total += get_str_return_length(i);
    }

    cout << "Total: " << total << endl;

//    cout << get_str_return_length(342) << endl
//        << get_str_return_length(115) << endl;


    getch();
    return 0;

}
