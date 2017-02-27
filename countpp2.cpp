#include<iostream>
using namespace std;

class Counter
{
private:
    unsigned int Count;
public:
    Counter():Count(0)
    {

    }
    Counter(int c) : Count(c)
    {

    }
    unsigned int get_count()
    {
        return Count;
    }
    Counter operator ++ ()
    {
        ++Count;
        return Counter(Count);
    }

};
int main()
{
    Counter c1,c2;

    cout << "\n c1 = " << c1.get_count();
    cout << "c2 = " << c2.get_count();

    ++c1;

    c2=++c1;

    cout << "\n c1 = " << c1.get_count();
    cout << "\n c2 = " << c2.get_count() << endl;

    return 0;

}
