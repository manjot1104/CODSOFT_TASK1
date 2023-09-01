#include<iostream>
using namespace std;
int main(){
    string name;
    cout<<"enter your name : ";
    getline(cin,name);
    while(1){
        int x=-1,y;
        cout<<"enter the value of n for range of numbers : ";
        cin>>y;
        int variable=rand()%y;
        while(x!=variable){
            cout<<"choose any number between 0 to "<<y<<":-";
            cin>>x;
            if(x>variable){
                cout<<"too high"<<endl;
            }
            else if(x<variable){
                cout<<"too low"<<endl;
            }
            else if(x==variable)
            cout<<"yes you are correct !!!"<<endl;
            cout<<endl;
        }
    }
}