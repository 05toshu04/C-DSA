#include<iostream>
using namespace std;

int main(){

int numb_a;
cout<<"enter the value of a "<<endl;
cin>>numb_a;

int numb_b;
cout<<"enter the value of b"<<endl;
cin>>numb_b;

int numb_c;
cout<<"enter the value of c"<<endl;
cin>>numb_c;

if(numb_a < numb_c && numb_b < numb_c ){
cout<<"c is greatest";
}
else if(numb_b < numb_b && numb_c < numb_a){
    cout<<"a is greatest";
}
else if(numb_a < numb_b && numb_c < numb_b ){
    cout<<"b is greatest";
}
else {
    cout<<"a , b , c are equal";

}







}

