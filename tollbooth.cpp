//tollbooth problem
#include<stdlib.h>
#include<iostream>
using namespace std;
class tollbooth
{
private:
    unsigned int noofcars;
    double money;
public:
    tollbooth() : noofcars(0), money(0)
    {

    }
   void payingcar()
    {
        noofcars++;
        money += 0.50;



    }
    void nopaycar()
    {
        noofcars++;
    }
    void display()
    {
        cout << "\n No of cars passed are\n " << noofcars;
        cout << "\nTotal money collected is\n " << money;

    }

};
int main()
{
    char choice;
    tollbooth paycar,nopaycar;
    while(1)
    {
        cout << "\nEnter p for pushing a paying car and n for pushing a nopaycar\n ";
        cout << "-------------------------------------------------------------------------\n";
        cout << "\nEnter d for displaying total no of cars and money\n ";
        cout << "-------------------------------------------------------------------------\n";
        cout << "\nEnter e for exiting\n ";
        cout << "-------------------------------------------------------------------------\n";

        cin >> choice;
        switch(choice)
        {
            case 'p' : paycar.payingcar();continue;
            case 'n' : nopaycar.nopaycar();continue;
            case 'd' : cout << "\nPaid cars and their payment is\n" ; cout << "-------------------------------------------------------------------------\n";
       ;paycar.display(); cout << "-------------------------------------------------------------------------\n";
       ;cout << "\nNon paid cars are \n";  cout << "-------------------------------------------------------------------------\n";
       ;nopaycar.display(); cout << "-------------------------------------------------------------------------\n";
       ;continue;
            case 'e' : cout << "Exiting,Thank you for using our services "; exit(0);
        }
        }
        return 0;

}
