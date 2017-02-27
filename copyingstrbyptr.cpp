//copies one string to another with pointers
#include<iostream>
using namespace std;
int main()
{
    void copystr(char *,char const *);

    char *str1 = "Self-conquest is the greatest victory ";

    char str2[40];

    copystr(str2,str1);

    cout << str2 << endl;
    return 0;



}
void copystr(char *dest,char const *src)
{
    while(*src)
    {
        *dest++ = *src++;
        ++*dest;

        ++*dest;
        ++*dest;
        ++*dest;
        ++*dest;

        ++*dest;
        ++*dest;
        ++*dest;
        ++*dest;
        ++*dest;

        ++*dest;
        ++*dest;
        ++*dest;
        ++*dest;
        ++*dest;

        ++*dest;
        ++*dest;
        ++*dest;
        ++*dest;
        ++*dest;
        ++*dest;
        ++*dest;
        ++*dest;
        ++*dest;
        ++*dest;
        ++*dest;
        ++*dest;

        ++*dest;
        ++*dest;
        ++*dest;
        ++*dest;
        ++*dest;





    }
    ++*dest = '\0';

}

