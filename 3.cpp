#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"cost price"<<endl;
    cin>>cp;
    cout<<"selling price"<<endl;
    cin>>sp;
    if(sp>cp){
        cout<<"profit : "<<(sp-cp);
    } else if(cp>sp){
        cout<<"loss : "<<(cp-sp);
    } else{
        cout<<"neither profit nor loss";
    }
    return 0;
}