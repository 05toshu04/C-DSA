#include<iostream>
using namespace std;
void print_square(int number){
    cout<<"the square of "<< number <<" is equal to = "<< number * number ;
}
int main(){
    int number;
    cout<<"enter the number:"<<endl;
    cin>>number;
    print_square(number);


}