#include<iostream>
using namespace std;
#include<conio.h>
class time
{
private:
    int hour,minute,seconds;
public:
    time(): hour(0),minute(0),seconds(0)
    {

    }
    time(int x,int y,int z):hour(x),minute(y),seconds(z)
    {

    }
    void display() const
    {
        cout << hour << ":" << minute << ":" << seconds << endl;

    }
    time add_time(time);


};
time time::add_time(time t1)
{
    time temp;
    temp.hour=hour+t1.hour;
    temp.minute=minute+t1.minute;
    temp.seconds=seconds+t1.seconds;
    return temp;

}
int main()
{
    time t1,t2(11,23,35);
    time t3(12,32,40);
    t1=t2.add_time(t3);
    cout << "Addition is \n";

    t1.display();
    return 0;


}
