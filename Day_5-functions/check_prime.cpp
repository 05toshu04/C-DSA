#include<iostream>
using namespace std;

int check_prime(int n){
    int is_prime=true;
    if(n<=1){
        is_prime=false;
    }

    for(int i=2;i<n;i++){
        if(n%i==0){
            is_prime=false;
            break;
        }
       
    }
     if(is_prime==1){
        cout<<"the number"<<n<<"is a prime number";
    }
    else{
        cout<<"the number "<<n<<"is a prime number";
    }
    return 0;
}
int main(){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    check_prime(n);




   


}
