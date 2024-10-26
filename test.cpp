#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
int main(){
    //&13 + 1 is 1-13
    //%13 is 0-12;
    bool flag = false;
    int inc= 0;
    while(!flag){
        srand(time(0));
        int num = rand() % 13+1;
        cout<<inc<<endl;
        cout<<num;
        inc++;

        if (num == 13){
            flag = true;
        }
    }


    
    return 0;   
}