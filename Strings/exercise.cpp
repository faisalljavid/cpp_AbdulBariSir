#include <iostream>
#include <string.h>
using namespace std;

//! FINDING LENGTH and also changing to UPPERCASE
// int main()
// {
//     int count = 0;
//     string s1 = "welcome";
//     //? first method
//     for (int i = 0; s1[i] != '\0'; i++)
//     {
//         count++;
//         s1[i] -=32;
//     }
//     cout << s1 << endl;
//     cout << count;
//     return 0;

//     //? 2nd method
//     string::iterator it;
//     for (it = s1.begin(); it != s1.end(); it++)
//     {
//         count ++;
//         *it = *it - 32;
//     }
//     cout << s1 << endl;
//     cout << count << endl;
//     return 0;
// }

//! Count number of Vowels, consonents and words

// int main()
// {
//     string str = "how Many wOrds";
//     string::iterator it;
//     int vowel = 0, consonent = 0, space = 0;
//     for (it = str.begin(); it != str.end(); it++)
//     {
//         if (*it == 'A' || *it == 'E' || *it == 'I' || *it == 'O' || *it == 'U' ||
//             *it == 'a' || *it == 'e' || *it == 'i' || *it == 'o' || *it == 'u')
//         {
//             vowel++;
//         }
//         else if (*it == ' ')
//         {
//             space++;
//         }
//         else
//         {
//             consonent++;
//         }
//     }
//     cout << "Vowels: " << vowel << endl;
//     cout << "Spaces: " << space << endl;
//     cout << "Consonents: " << consonent << endl;

//     return 0;
// }

//! Reverse a String ana check if it is a Palindrome

// int main()
// {
//     string s1 = "malayalami";
//     string s2;
//     string::reverse_iterator it;
//     for (it = s1.rbegin(); it != s1.rend(); it++)
//     {
//         s2 += *it;
//     }
//     if (s1.compare(s2) == 0)
//         cout << "Palindrome";
//     else
//         cout << "Not Palindrome";

//     return 0;
// }

//! Finding username from an email

int main()
{
    string s1 = "faisalljavid@gmail.com";
    int pos = s1.find('@');
    string uname = s1.substr(0, pos);
    cout << "Username is: " << uname << endl;

    return 0;
}