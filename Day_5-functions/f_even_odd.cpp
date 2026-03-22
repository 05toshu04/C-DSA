#include<iostream>
using namespace std;

bool check(int number){
    return number % 2==0;
}
int main(){
    int number;
    cout<<"enter the number : "<<endl;
    cin>>number;

    int result=check(number);

    if(result==1){
        cout<<"the number "<<number <<" is an even number";
    }
    else{
        cout<<"the number "<<number <<" is an odd number";
    }


}