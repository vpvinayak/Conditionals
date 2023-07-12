#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter your marks"<<endl;
    cin>>marks;
    if((100>=marks)&&(marks>90)){
        cout<<"A+";
    } else if((90>=marks)&&(marks>80)){
        cout<<"A";
    } else if((80>=marks)&&(marks>70)){
        cout<<"B+";
    } else if((70>=marks)&&(marks>60)){
        cout<<"B";
    } else if((60>=marks)&&(marks>50)){
        cout<<"C";
    } else if((50>=marks)&&(marks>40)){
        cout<<"D";
    } else if((40>=marks)&&(marks>30)){
        cout<<"E";
    } else {
        cout<<"F";
    }
    return 0;
}