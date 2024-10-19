#include <iostream>
using namespace std;

int modulo(int,int);

int main(){
    int divident;
    int devisor;
    int rem;
    cin>>divident>>devisor;
    cout<<divident<<" % "<<devisor;

    rem = modulo(divident,devisor);
    cout<<" = "<<rem;
    

    return 0;
}


int modulo(int div,int dev){
    int res = div;
    while(res > dev){
        res -=dev;
    }
    return res;
}