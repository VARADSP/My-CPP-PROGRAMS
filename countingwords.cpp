#include<iostream>
using namespace std;
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int chcount=0;
    int wdcount=1;
    char ch;
    while((ch=getch()) != '\r')
          {
              if(ch ==' ')
          wdcount++;
    else
    chcount++;


          }
          cout << "\nWords " << wdcount << endl;
          cout << "\nLetters" << chcount << endl;
          return 0;

}
