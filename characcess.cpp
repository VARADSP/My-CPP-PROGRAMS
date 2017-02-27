//accessing characters in string objects
#include<iostream>
#include<string>
using namespace std;

int main()
{
    char chararray[80];
    string word;

    cout << " Enter a word";
    cin >> word;
    int wlen = word.length();
    cout << "One character at a time " ;
    for(int j=0;j<wlen;j++)
    {


        cout << word.at(j);
        //cout << word[j];
    }
    word.copy(chararray,wlen,0);

    chararray[wlen] = 0;
    cout << "\narray contains " << chararray << endl;
    return 0;

}
