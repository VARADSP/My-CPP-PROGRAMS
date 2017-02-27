#include<iostream>'
#include<conio.h>
using namespace std;
int main()
{
    int intarray[5]={31,54,77,52,93};
    for(int i=0;i<5;i++)
    {
        cout << *(intarray+i) << endl;

    }
    return 0;
}
