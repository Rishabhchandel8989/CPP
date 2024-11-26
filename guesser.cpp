/*
 
what we were doing -> 1.There is 3 player, umpire and Guesser
                      2.Three Player give the number 
                      3.and guesser will also give the number 
                      4.and umpire will be there to check which player number is matching with guesser



Classes 1. Umpire
        2.Guesser
        3.Player

main function->1. Create a Umpire
               2.get the number from guesser
               3.get the number from all three player
               4.print the result of the game
               5.End the Game


*/
#include<iostream>
using namespace std;

class Guesser{

    int guesser_num;

    public:
    int takegueeserInput(){
        int x;
        cout<<"Give the numberfor the guesser: "<<endl;
        cin>>x;
        guesser_num=x;
        return guesser_num;
    }
};

class Player{
    int player_num;

    public:
    int takePlayerInput(){
        int p;
        // cout<<"Give the number for the player: "<<endl;
        cin>>p;
        player_num=p;
        return player_num;
    }
};
class Umpire{
    public:
    int g;
    int p1num;
    int p2num;
    int p3num;

    public:
    void GetTheNumberFromGuesser(){
        Guesser g1;
        g=g1.takegueeserInput();
    }
    void GetTheNumberFromPlayer(){
        Player p1;
        Player p2;
        Player p3;
        cout<<"Give the  number for the player 1: "<<endl;
        p1num=p1.takePlayerInput();
        cout<<"Give the  number for the player 2: "<<endl;
        p2num=p2.takePlayerInput();
        cout<<"Give the  number for the player 3: "<<endl;
        p3num=p3.takePlayerInput();

    }
    void PrintTheResult(){
        // g  p1num p2num p3num

        if(g==p1num){
            if(g==p2num && g==p3num) cout<<"All player won the game"<<endl;

            else if(g==p2num) cout<<"Player 1 and player 2 won the game"<<endl;

            else if(g==p3num) cout<<"Player 1 and player 3 won the game"<<endl;

            else cout<<"Player 1 won the game"<<endl;
        }
        else if(g==p2num){
            // p1 has not won ,p2 has won ->already won
            if(g==p3num){
                cout<<"Player 2 and 3 won the game"<<endl;
            }
            else{
                cout<<"Player 2 won the game"<<endl;
            }   
        }
        else if(g==p3num){
            cout<<"The player 3 has won the game"<<endl;
        }
        else{
            // No one won the game
            cout<<"All the payer lost the game"<<endl;
        }
    }
};

int main(){
     cout<<"-----------------Let's start the Game----------------"<<endl;

     Umpire u;
     u.GetTheNumberFromGuesser();
     u.GetTheNumberFromPlayer();
     u.PrintTheResult();

     cout<<endl;
     cout<<"------------------End Game----------------------------";
}