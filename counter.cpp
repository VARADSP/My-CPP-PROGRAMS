//object represents a counter variable
#include<iostream>
using namespace std;
///////////////////////////////////////////
class counter
{
private:
    unsigned int count;
public:
    counter() : count(1)
    {
        cout << "HI";
        cout << endl;

    }
    ~counter()
    {

    }
    void inc_count()
    {
        count++;

    }
    int get_count()
    {

        return count;
    }
};
////////////////////////////////////
int main()
{
    counter c1,c2;
    cout << "\n c1 =" << c1.get_count();
    cout << "\n c2 =" << c2.get_count();
    c1.inc_count();
    c2.inc_count();
    c2.inc_count();
    cout << "\n c1 = " << c1.get_count();
    cout << "\n c2 =" << c2.get_count();
    cout << endl;
    return 0;

}
