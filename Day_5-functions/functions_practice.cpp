#include<iostream>
using namespace std;



int  function_2(){
    cout<<"function 2"<<endl;
    return 0;
}


int function_1(){
    cout<<"call function 1"<<endl;
    function_2();
    return 0;
}


int main(){
    cout<<"hello"<<endl;
    function_1();
    return 0;

}
