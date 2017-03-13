//array of pointers to objects
#include<iostream>
using namespace std;

//////////////////////////////
class person
{
private:
    char name[40];
public:
    void getname()
    {
        cout << "Enter name" ;
        cin >> name;

    }
    void printname()
    {
        cout << " Name is " <<  name;
        cout << endl;


    }

};
//////////////////////
int main()
{

    person *persptr[100];

    int n=0;

    char choice;

    do
    {
        persptr[n] = new person;
        persptr[n]->getname();

        n++;

        cout << "Enter another (y/n) " ;
        cin >> choice;


    }
    while(choice == 'y');
    for(int i=0;i<n;i++)
    {
        cout << "\n Person number " << i+1;

        persptr[i]->printname();

    }
    cout << endl;
    return 0;

}

