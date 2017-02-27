// Models employees database using inheritance
#include<iostream>
using namespace std;
#include<stdlib.h>
const int LEN = 80;
//////////////////////////////////////
class employee
{
private:
    char name[LEN];
    unsigned long number;
public:
    void getdata()
    {
        cout << "\n Enter last name " ; cin >> name;
        cout << " Enter number " ; cin >> number ;

    }
    void putdata()
    {
        cout << "\n Name : " << name;
        cout << "\n Number : " << number;

    }

};
//////////////////////////////////
class manager : public employee
{
private:
    char title[LEN];
    int dues;
public:
    void getdata()
    {
        employee :: getdata();
        cout << " Enter title" ; cin >> title;
        cout << " Enter golf club dues " ; cin >> dues;

    }
    void putdata()
    {
        employee :: putdata();
        cout << "\n Title " << title;
        cout << "\n Golf club dues " << dues;
    }
};
////////////////////////////
int main()
{
    manager m1;
    cout << endl;
    cout << "\n Enter data for manager " ;
    m1.getdata();

    cout << "\n Data on manager " ;
    m1.putdata();


    cout << endl;

}
