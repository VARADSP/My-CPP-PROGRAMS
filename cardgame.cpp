//cardobj.cpp
//Cards as objects
#include<iostream>
using namespace std;
enum Suit {clubs,diamonds,hearts,spades};
const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;
////////////////////////////////
class card
{
private:
    int number;
    Suit suit;
public:
    card()
    {

    }
    card (int n,Suit s) : number(n),suit(s)
    {

    }
    void display();
    bool isEqual(card);

};
void card::display()
{

    if(number >=2 && number <= 10)
    {
        cout << number << "of ";

    }
    else
        switch(number)
    {
        case jack: cout << "Jack of " ; break;
        case queen: cout << "Queen of " ; break;
        case king: cout << "King of " ; break;
        case ace: cout << "ace of " ; break;

    }
    switch(suit)
    {
        case clubs : cout << "Clubs " ; break;
        case diamonds : cout << "Diamonds " ; break;
        case hearts : cout << "Hearts " ; break;
        case spades : cout << "Spades " ; break;

    }
}
//.........................
bool card::isEqual(card c2)
{
     return ( number==c2.number && suit==c2.suit ) ? true : false;


}
int main()
{
    card temp,chosen,prize;
    int position ;
    card card1(7,clubs);
    cout << "\nCard 1 is the" ;
    card1.display();
    card card2(jack,hearts);
    cout << "\nCard 2 is the" ;
    card2.display();
    card card3(ace,spades);
    cout << "\nCard 3 is the" ;
    card3.display();

    prize = card3;

    cout << "\n Now I am swapping card1 and card3";
    temp = card3 ; card3 = card1 ; card1 = temp;
    cout << "\nI'am Swapping card2 and card3";
    temp = card3 ; card3 = card2 ; card2 = temp;
    cout << "\nI'am Swapping card1 and card2";
    temp = card2 ; card2=card1 ; card1 = temp;
    cout << "\n Now,Where (1,2 or 3) is the " ;
    prize.display();
    cout << "?";
   cin >> position;
   switch (position)
   {
       case 1 : chosen = card1;break;
       case 2 : chosen = card2;break;
       case 3 : chosen = card3;break;

   }
   if(chosen.isEqual(prize))
    cout << "Thats right you win asshole ";
   else
    cout << " Sorry Fu** off " ;
   cout << "Your mistake was this " ;
   chosen.display();
   cout << endl;
   return 0;



}

