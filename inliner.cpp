#include<iostream>
using namespace std;
//lbstokg
//converts pounds to kilogram
inline float lbstokg(float pounds)
{

    return 0.453592*pounds;

}
int main()
{
    float lbs;
    cout << "\nEnter your weight in pounds";
    cin >> lbs;
    cout << "Your weight in kilograms is " << lbstokg(lbs) << endl;
    return 0;
}



