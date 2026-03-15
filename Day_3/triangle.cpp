// check the given triangle is valid or not 
#include<iostream>
using namespace std;

int main(){

int side_a;
cout<<"enter side of a"<<endl;
cin>>side_a;

int side_b;
cout<<"enter side of b"<<endl;
cin>>side_b;


int side_c;
cout<<"enter side of c"<<endl;
cin>>side_c;


if( side_a + side_b > side_c && side_b + side_c > side_a && side_a + side_c > side_b){
    cout<<"valid triangle";
}
else{
    cout<<"not a valid trianle";
}







}