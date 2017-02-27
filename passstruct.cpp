//engldisp.cpp
//demo for passing structure as argument
#include<iostream>
using namespace std;
struct Distance
{
    int feet;
    float inches ;

};
void engldisp(Distance);
int main()
{
    Distance d1,d2;
    cout << "enter feet "; cin >> d1.feet;
    cout << "enter inches "; cin >> d1.inches;

    cout << "\n Enter feet "; cin >> d2.feet;
    cout << "Enter inches "; cin >> d2.inches;

    cout << "\nd1 = ";
    engldisp(d1);
    cout << "\nd2 = ";
    engldisp(d2);
    cout << endl;
    return 0;

}

//engldisp()
void engldisp(Distance dd)
{
    cout << dd.feet << "\'-" << dd.inches << "\"";

}
