//strings defined using array and pointer notation
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str1[] = "Defined as an array";
    char *str2 = "Defined as a pointer";
    char *str3 = "Eefined as a pointer";


    cout << str1 << endl;
    cout << str2 << endl;

    for(int i=1;i<strlen(str1);i++)
    {
        cout << str1[i];

    }
    cout << endl;

    str2++;

    cout << str2 << endl;
    --str2;


    cout << str2 << endl;
    if(str2 != str3)
        cout << "They are not same\n";

    cout << str2 << endl;

    return 0;

}
