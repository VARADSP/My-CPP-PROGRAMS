//Int class
#include<iostream>
using namespace std;
class Int
{

    int Int1;
public:
    Int()
    {

    }

    Int(int in) : Int1(in)
    {

    }
    const void showInt()
    {
        cout << Int1;
    }
    void getInt()
    {
        cout << "\nEnter Int data";
        cin >> Int1;

    }

    void add_Int(Int,Int);


};

void Int::add_Int(Int a,Int b)
{
    Int1 = a.Int1+b.Int1;

}
int main()
{
    const Int Int1(3),Int2(4);
    Int Int4,Int5,Int6;
    cout << "Already defined two ints as 3 and 4 ";
    Int4.getInt();
    Int5.getInt();

    Int Int3;
    Int3.add_Int(Int1,Int2);
    Int6.add_Int(Int4,Int5);
    cout << "\nAddition of two Int is "; Int3.showInt();
    cout << "\nAgain addition is "; Int6.showInt();




}
