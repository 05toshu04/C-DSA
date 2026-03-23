#include<iostream>
using namespace std;
void counting(int number){
    for(int i=1;i<=number;i++){
        cout<<i<<endl;
    }
}
int main(){
    int number;
    cout<<"enter the number"<<endl;
    cin>>number;
    counting(number);

}