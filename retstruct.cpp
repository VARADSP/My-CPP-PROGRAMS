//demo for returning a structure
#include<iostream>
using namespace std;
struct Distance
{
    int feet;
    float inches;

};
Distance addeng1(Distance,Distance);
void engldisp(Distance);
int main()
{
    Distance d1,d2,d3;
    cout << "\nEnter feet"; cin >> d1.feet;
    cout << "\nEnter inches"; cin >> d1.inches;

    cout << "\nEnter feet"; cin >> d2.feet;
    cout << "\nEnter inches"; cin >> d2.inches;

    d3=addeng1(d1,d2);
    cout << endl;
    engldisp(d1); cout << "+";
    engldisp(d2); cout << "=";
    engldisp(d3); cout << endl;
    return 0;



}
//addeng1()
//adds two structures of type Distance and returns sum
Distance addeng1(Distance dd1,Distance dd2)
{

    Distance dd3;
    dd3.inches = dd1.inches + dd2.inches;
    dd3.feet =0;
    if (dd3.inches >= 12.0)
    {

        dd3.inches -= 12.0;
        dd3.feet++;

    }
   dd3.feet += dd1.feet + dd2.feet;
   return dd3;

}
//engldisp()
//display structure of type Distance in feet and inches
void engldisp(Distance dd)
{
    cout << dd.feet << "\'-" << dd.inches << "\"";
}

