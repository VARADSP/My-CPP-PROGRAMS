//leverage class
#include<iostream>
using namespace std;
///////////////////////////////
class leverage
{
private:
    int crowbar;
public:
    leverage() : crowbar(3)
    {

    }

    void pry()
    {
        cout << "HI";

    }

    int getcrow();

};
int leverage::getcrow()
{
    return crowbar;
}
int main()
{
    leverage lever1;
    int a;
    cout << "Execute lever1 " ; lever1.pry(); cout << endl;
    cout << "Value of crowbar is " ; a=lever1.getcrow(); cout << a;
}
