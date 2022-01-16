#include <iostream>
#include <string>
using namespace std;

/**
* PURPOSE:
*   takes any arbitrary string to obtain the length of the longest palindrome
* PARAMETER:
*   input, a string consisting of English letters
* RETURN VALUE
*   an integer value that outputs the longest possible length of the palindrome
*/
int getLongestLength(string str)
{
    // If the total number of duplicate letters is even, then add 1
    // If the total number of duplicate letters is odd, then that's the total
    string temp;
    for(int i = 0; i < str.length(); i++)
    {
        for(int j = 0; j < str.length(); j++)
        {
            if(str[j] > str[i])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp[0];
            }
        }
    }
    cout << str << endl;
    return 0;
}
int main()
{
    cout << getLongestLength("abBaca"); // 1
    return 0;
}
