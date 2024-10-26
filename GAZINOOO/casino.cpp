#include <iostream>
#include <sstream>
#include <string>
#include <random>
#include "card.h"



using namespace std;

void blackJack();

int main(){
    bool flag = false;
    while(!flag){
        cout<<"what game would you like to play:\n"
            <<"\033[31m"<<"\t-blackjack\n"<<"\033[0m"
            <<"\033[33m"<<"\t-poker\n"<<"\033[0m"
            <<"\033[32m"<<"\t-roulette"<<"\033[0m"
            <<"\n->";
        string line;
        getline(cin,line);
        for(auto& c:line){
            c = tolower(c);
        }
        if(line == "blackjack"){
            blackJack();
        }
    }
    return 0;
}


//implement blackjack:
void blackJack(){
    char yn;
    while(!cin.fail()){
        cout<<"you chose "
            <<"\033[31m"<<"blackjack"<<"\033[0m"
            <<" is that correct? (y/n)";
        cin>>yn;
        if(tolower(yn) == 'n'){
            return;
        }else if(tolower(yn) == 'y'){
            cin.clear();
            cin.ignore(100,'\n');//ignores if user says "y...";
            //implement->>>
            for(int i = 0;i<52;i++){
                if(i%13 == 0) cout<<"new Suit:\n";
                if(i%13 <10 & i%13 != 0){
                    //number cards
                    Deck[i].val.push_back(i%13 + 1);
                }else if(i%13 == 0){
                    //Aces
                    Deck[i].val.push_back(1);
                    Deck[i].val.push_back(11);
                }else{
                    //face cards
                    Deck[i].val.push_back(10);
                }
                if(Deck[i].val.size() > 1){
                    for(int num:Deck[i].val){
                        cout<<num<<", ";
                    }
                        cout<<endl;
                }else{
                    cout<<Deck[i].val[0]<<endl;
                }
            }
            


            return;
        }else{
            cout<<"incorrect input\n";
            cin.clear();
        }

    }

}



//implement poker:







//implement roulette: