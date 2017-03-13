//Convert between strings and class string
#include<iostream>
using namespace std;
#include<strings.h>
class String
{
private:
    enum {SZ=80};
    char str[SZ];
public:
    String()
    {
        str[0]='\0';

    }
    String(char s[])
    {
        strcpy(str,s);
    }
    void display()
    {
        cout << str;

    }
    operator char *()
    {
        return str;
    }

};
int main()
{
    String s1;
    char xstr[] = "VSP I AM THE BOSS";
    s1 = xstr;
    s1.display();
    String s2="\nHI THIS IS REVERSE ";
    cout << static_cast<char*>(s2);
    cout << s2[2];
    cout << endl;
    return 0;
}
