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
    // 1st determine if a string is a palindrome
    // strings with an even number of letters must have an even number for each character
    // strings with an uneven number of letters can only have one uneven set of characters

    // str length and the number of unique characters may determine max length
    //
    int palindromeLen;
    if(str.length() == 1)
        palindromeLen = 1;
    else if(str.length() % 2 == 0)
    {
        for(int i = 0; i < str.length() / 2; i++)
        {
            int tallyMatch;
            for(int j = str.length() - 1; j > str.length() / 2; j--)
            {
                if(str[i] == str[j + i])
                {
                    tallyMatch++;
                }
            }
            if(tallyMatch != 0)
            {
                palindromeLen++;
            }
            else
                palindromeLen = 1;
        }
    }
    if(palindromeLen == 1)
        return palindromeLen;
    else if(str.length() % 2  == 0)
    {
        palindromeLen = palindromeLen * 2 - 1;
        return palindromeLen;
    }
    else
    {
        palindromeLen *= 2 - 1;
        return palindromeLen;
    }
    return palindromeLen;
}
int main()
{
    cout << getLongestLength("abccba"); // 1
    return 0;
}
