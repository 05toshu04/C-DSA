#include<iostream>
using namespace std;

float area_circle(int radius){
    float area = 3.14 * radius * radius;
    return area;
}
int main(){
    int radius;
    cout<<"enter the radius of a circle : "<<endl;
    cin>>radius;
    cout<<"area of a circle is equal to = "<<area_circle(radius);


}