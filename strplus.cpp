//overloaded '+' operator concatenates strings
#include<iostream>
using namespace std;
#include<string.h>
#include<stdlib.h>


class String
{
private:
    enum {SZ=80};
    char str[SZ];
public:
    String()
    {
        strcpy(str," ");

    }
    String(char s[])
    {
        strcpy(str,s);

    }
    void display()
    {
        cout << str;

    }
    String operator + (String ss)
    {
        String temp;
        if(strlen(str)+strlen(ss.str)<SZ)
        {
            strcpy(temp.str,str);
            strcat(temp.str,ss.str);

        }
        else
        {
            cout << "\n String overflow " ;
            exit(1);

        }
        return temp;


    }
};

int main()
{
    String s1 = "\n Hi my name is fucked up";
    String s2 = "Man This shit is mine ";
    String s3;
    s1.display();
    s2.display();

    s3=s1+s2;
    s3.display();
    cout << endl;
    return 0;
}
