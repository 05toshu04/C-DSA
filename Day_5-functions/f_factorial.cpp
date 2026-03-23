#include<iostream>
using namespace std;
int calculate_factorial(int number){
    int factorial=1;
    for(int i=1;i<=number;i++){
        factorial=factorial * i;
    }
    return factorial;
}
int main(){
    int number;
    cout<<"enter the number : "<<endl;
    cin>>number;
    cout<<"factorial of a "<<number<<" is equal to "<<calculate_factorial(number);


}