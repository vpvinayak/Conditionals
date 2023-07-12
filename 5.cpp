#include<iostream>
using namespace std;
int main(){
    char a;
    int b,c;
    cout<<"enter an operator(+,-,*,/) : "<<endl;
    cin>>a;
    cout<<"enter two numbers : "<<endl;
    cin>>b;
    cin>>c;
    switch(a){
        case '+':
          cout<<(b+c);
          break;

        case '-':
          cout<<(b-c);
          break;

        case '*' :
          cout<<(b*c);
          break;

        case '/':
          cout<<(b/c);
          break; 

        default:
          cout<<"error";
    }
    return 0;
}