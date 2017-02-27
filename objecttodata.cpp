//conversions : Distance to meters to Distance
#include<iostream>
using namespace std;
////////////////////////////////
class Distance
{
private:
    int feet;
    float inches;
    const float MTF;
public:
    Distance() : feet(0),inches(0.0),MTF(3.280833F)
    {

    }
    Distance(float meters) : MTF(3.280833F)
    {
        float fltfeet = MTF * inches;
        feet = int(fltfeet);
        inches = 12 * (fltfeet - feet);
    }
    Distance(int ft,float in ) : feet(ft),inches(in),MTF(3.280833F)
    {

    }
    void getdist()
    {
        cout << "\nEnter feet " ; cin >> feet;
        cout << "Enter inches" ; cin >> inches;

    }
    void showdist()
    {
        cout << feet << "\'" << inches << "\" " ;

    }
    operator float() const
    {
        float fracfeet = inches/12;
        fracfeet += static_cast<float>(feet);
        return fracfeet/MTF;

    }


};
int main()
{
    float mtrs;
    Distance dist1 = 2.35F;
    mtrs = dist1;

    cout << "\ndist1 = " << mtrs << " meters \n";

    Distance dist2(5,10.25);

    mtrs = dist2;
    cout << "\ndist2 = " << mtrs << " meters\n";
    return 0;

}
