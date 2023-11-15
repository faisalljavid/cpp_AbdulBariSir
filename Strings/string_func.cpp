#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;

int main()
{
    //! strlen

    // char s[50] = "Hello";
    // cout << s << endl;
    // cout << strlen(s) << endl;

    //! strcat

    // char s1[20] = "Good";
    // char s2[20] = "Morning";
    // strcat(s1,s2);   //? strncat(s1,s2,3) takes 3 words only to concatenate
    // cout << s1 << endl;

    //! strcpy

    // char s1[20] = "Good";
    // char s2[10] = "Love";
    // strcpy(s2,s1);
    // cout << s2 << endl;

    //! strstr

    // char s1[20] = "Programming";
    // char s2[10] = "ing";
    // cout << strstr(s1, s2) << endl;

    //! strchar

    // char s1[20] = "Programming";
    // cout << strrchr(s1, 'i') << endl;

    //! strcmp

    char s1[20] = "HellO";
    char s2[20] = "Hello";
    cout << strcmp(s1,s2) << endl;

    return 0;
}