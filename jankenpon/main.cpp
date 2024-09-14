
/*
DESCRIPTION:
Play a game of rock paper scissors with a computer or another player in terminal

- The game will keep track of how many times you have won or lost.

STATUS:
INCOMPLETE

TODO:
1. add make file
2. implement a way for online play
3. finish 1 player
4. Keep track of # of games and how many times player has won/lost
5. make letters come out one by one rather than all at once
*/
#include <iostream>
using namespace std;
int main(){
    int wins = 0;
    int loses = 0;
    int total = 0;
    int choice;

    cout<<"Hello player! Who are you playing with?\n";
    do{
        cout<<"1. Computer"<<endl
            <<"2. Another Player"<<endl
            <<"(Type either 1 or 2)\n#";
        cin>>choice;
        if(choice == 1) {
            cout<<"you chose Computer:\n";
        
        }
        if(choice == 2) {
            cout<<"ERROR: Sorry feature not yet implemented\nPlease try another option \n";
        }
        if(cin.fail()|| choice != 1 & choice != 2){
            cout<<"ERROR: incorrect useage: Please try again\n";
            cin.clear();
            choice = 0;
        }
    }while(cin.fail()|| choice != 1);
    do{
        string beast;
        cout<<"Hello player! I am your opponent Rob. Lets play rock-paper-scissors!\n"
            <<"Readyy?? \n";
        system("pause");
        cout<<"ROCK\nPAPER\nSCISSORS\nGOOOOO!!!";
        cin>>beast;

    }while(false);
    return 0;
}