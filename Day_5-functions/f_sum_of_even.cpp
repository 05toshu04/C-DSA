#include<iostream>
using namespace std;
int even_counting(int number){
     int sum=0;
    for(int i=2;i<=number;i=i+2){
       
        sum = sum + i;
        
       
    }
    return sum;
    
}
int main(){
    int number;
    cout<<"enter the number"<<endl;
    cin>>number;
    cout<<"sum of even numbers = "<< even_counting(number);


}

