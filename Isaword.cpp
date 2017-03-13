//Gets the word count
#include<iostream>
using namespace std;
#include<conio.h>

enum Isaword {NO,YES};
int main()
{
    Isaword Isaword = NO;
    char ch = 'a';

    int wordcount=0;
    cout << "Enter a phrase \n";

    do
    {
        ch = getche();
        if(ch == ' '  || ch == '\r')
        {
            if(Isaword == YES)
            {
                wordcount++;
                Isaword=NO;

            }
        }
            else
            {
                if(Isaword == NO)
                {
                    Isaword = YES;
                }

            }

    }while(ch != '\r');
    cout << "\n Word Count is " << wordcount << "...\n";
    return 0;

}
