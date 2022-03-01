#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void rules();

int main()
{
    string name;
    int balance, bet, guess, correct_number;
    char choice;
    srand(time(0)); ///random generator
    cout<<"\n\t\t======WELCOME TO THE CASINO======";
    cout<<"\nType your name here: ";
    cin>>name;
    cout<<"\nHow much $ do you have:";
    cin>>balance;
    do
    {
        system("cls");
        rules();
        cout<<"Your current balance in $ is: "<<balance<<"\n";
        do
        {
            cout<<"Now, please enter how much $ you want to bet: ";
            cin>>bet;
            if(bet>balance)
                cout<<"\nYou don't have so much money, do you ?\n"<<"Re-enter balance\n";

            cout<<"Type a number between 1 to 10\n";
            cin>>guess;
        }while(guess<1 || guess>10);
        correct_number=rand()%10+1;
        if(guess==correct_number)
        {
            cout<<"\nLucky guess!! You just won "<<bet*10;
            balance+=bet*10;
        }
        else
        {
            cout<<"\nHaha, WRONG!! You just lost "<<bet<<" $\n";
            balance-=bet;
        }
        cout<<"The winning number was: "<<correct_number<<"\n";
        cout<<"\nYour current balance is: "<<balance<<"\n";
        if(balance==0)
        {
            cout<<"You're out of money!";
            break;
        }
        cout<<"\n-->Wanna try again (y/n)?";
        cin>>choice;
    }while(choice == 'Y' || choice == 'y');
    cout<<"\n\nThanks for playing this game, made by Hudita Alexandru on 1/03/2022";
    return 0;
}

void rules()
{
    system("cls");
    cout<<"\t\t======CASINO NUMBER GUESSING RULES!======\n";
    cout<<"\t1.Choose a number from 1 to 10";
    cout<<"\n\t2.If you are correct, you win 2 times of the money bet";
    cout<<"\n\t3.If you are wrong, you lose all the amount you bet\n\n";
}