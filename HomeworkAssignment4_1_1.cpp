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
    int duplicateCount;
    //str.append(" ");
    for(int i = 0; i < str.length() / 2 + 1; i++)
    {
        for(int j = str.length() - 1; j > i; j--)
        {
            if(str[i] == str[j])
                duplicateCount++;
        }
        cout << duplicateCount << endl;
    }
    if(duplicateCount % 2 == 0)
        duplicateCount *= 2;
    return duplicateCount;
}
int main()
{
    cout << getLongestLength("abaab"); // 1
    return 0;
}
