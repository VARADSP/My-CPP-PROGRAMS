//normal functions accessed from pointers
#include<iostream>
using namespace std;
///////////////////////////
class base
{
public:
   virtual void show()
    {
        cout << "Base\n ";

    }
};

class Derv1 : public base
{
public:
    void show()
    {
        cout << "Derv 1 \n";

    }

};
class Derv2 : public base
{
public:
    void show()
    {
        cout << "Derv2 \n";

    }


};
//////////////////////
int main()
{
    Derv1 dv1;
    Derv2 dv2;
    base *ptr;


    ptr = &dv1;
    ptr ->show();
    ptr = &dv2;
    ptr ->show();
    return 0;
}
