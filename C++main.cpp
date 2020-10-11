#include <iostream>
using namespace std;
int main(){
    double cost_of_item;
    int numyears;
    double inflation;
    double per;
    cout<<"enter the cost of item"<<endl;
    cin>>cost_of_item;
    cout<<"enter the number of years from noe that item will be purchases"<<endl;
    cin>>numyears;
    cout<<"enter the inflation rate"<<endl;
    cin>> inflation;
    per = inflation/100;
    cout <<per<<endl;
    double total;
    for(int i = 0; i < numyears; i++){
        total = cost_of_item*per;
        cost_of_item +=total;
        //cout<<total<<endl;
        cout<<cost_of_item<<endl;
    }
}
