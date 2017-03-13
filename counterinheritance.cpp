//inheritance with counter class
#include<iostream>
using namespace std;
//////////////////////////////////
class Counter
{
protected:
    unsigned int Count;
public:
    Counter() : Count(0)
    {

    }
    Counter(int c) : Count(c)
    {

    }
    unsigned int get_count() const
    {
        return Count;
    }
    Counter operator ++ ()
    {
        return Counter(++Count);
    }

};
///////////////////////////////
class CountDn : public Counter
{
public:
    CountDn() : Counter()
    {

    }
    CountDn(int c) : Counter(c)
    {

    }

    Counter operator -- ()
    {
        return Counter(--Count);

    }

};
////////////////////////////////////
int main()
{
    CountDn c1;
    CountDn c2(100);
    --c2;
    cout << "\nc2 =" << c2.get_count();

    cout << "\nc1 = " << c1.get_count();

    ++c1;++c1;++c1;
    cout << "\nc1 = " << c1.get_count();

    --c1;--c1;
    cout << "\nc1 = " << c1.get_count();
    cout << endl;
    return 0;

}
