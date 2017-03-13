//initialize objects using default copy constructor
#include<iostream>
using namespace std;
/////////////////////////////////////////////////
class Distance
{
private:
    int feet;
    float inches;
public:
    Distance() : feet(0),inches(0)
    {             }
    //Note : no one-arg constructor
    Distance(int ft,float in) : feet(ft),inches(in)
    {

    }
    void getdist()
    {
        cout << "\nEnter feet "; cin >> feet;
        cout << "Enter inches" ; cin >> inches;

    }
    void show_dist()
    {
        cout << feet << "\'-" << inches << "'\"" ;

    }
};

int main()
{
    Distance dist1(11,6.25);
    Distance dist2(dist1);
    Distance dist3 = dist1;

    cout << "\ndist1 = "; dist1.show_dist();
    cout << "\ndist2 = "; dist2.show_dist();
    cout << "\ndist3 = "; dist3.show_dist();

    cout << endl;
    return 0;

}


