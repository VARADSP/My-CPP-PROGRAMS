//increments counter variable with ++ operator
#include<iostream>
#include<string>
using namespace std;
///////////////////////////////////////////////////
class Counter
{
private:
    unsigned int Count;
public:
    Counter() :  Count(0)
    {

    }
    unsigned int get_count()
    {
        return Count;

    }
    Counter operator ++ ()
    {
        ++Count;
        Counter temp;
        temp.Count = Count;
        return temp;
    }

};
///////////////////////////////
int main()
{
    Counter c1,c2;

    cout << "\nc1= " << c1.get_count();//display
    cout << "\nc2= " << c2.get_count();

    ++c1;
    c2=++c1;


    cout << "\nc1= " << c1.get_count();//display
    cout << "\nc2= " << c2.get_count() << endl;
    return 0;

}
