//array of strings
#include<iostream>
using namespace std;
int main()
{
    const int DAYS = 7;
    const int MAX = 10;
    char str[DAYS][MAX]={"Sunday","Monday","Tuesday","Wednsday","Thursday","Friday","Saturday"};
    for(int j=0;j<DAYS;j++)
        cout << str[j] << endl;
    return 0;
}
