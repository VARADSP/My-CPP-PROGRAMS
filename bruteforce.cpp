#include<iostream>
#include<conio.h>
#include<string>
#include<cstring>
#include<string.h>
using namespace std;
int main()
{
    const int MAX = 80;
    string para,word;
    int i=0,c=0;

    cout <<"Enter a paragraph\n";
    getline(cin,para);

    cout << "\nEnter a word you want to search\n";
    getline(cin,word);

    while(para[i] != '\0')
    {
        if(para[i]==word[c] && word[c]!='\0' && para[i] != ' ')
            c++;
        else
            c=0;
        i++;

    }
    if(c==word.length())
        cout << "\nWord Found " << endl;
    else
        cout << "\nWord not found" << endl;
 return 0;
}
