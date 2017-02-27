//passbyref
//adrguments passed by reference
#include<iostream>
using namespace std;
int main()
{
    void centimize(double &);
    double var=10.0;
    centimize(var);
    cout << "var = " << var << "Centimeters " << endl;
    return 0;
}
void centimize(double &v)
{
    v *= 2.54;
}

