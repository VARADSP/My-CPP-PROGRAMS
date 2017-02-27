//strcpy.cpp
//copies a string using strcpy() function
#include<iostream>
using namespace std;
#include<string.h>

int main()
{
    char str1[] = "Tiger,tiger,burning bright \n"
                  "In the forests of the night ";

    int MAX=80;
    char str2[MAX];

    strcpy(str2,str1);
    cout << str2 << endl;
    return 0;
}
