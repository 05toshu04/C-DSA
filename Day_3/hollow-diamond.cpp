#include<iostream>
using namespace std;
int main(){
    int n=4;
    int b=0;
    int h=6;

    for(int i=0;i<5;i++){



        for(int j=0;j<n;j++){
            cout<<" ";




        }

        for(int k=i;k<=i;k++){
            if(k==0){
                cout<<"*";
            }

            else {
                cout<<"*";

                for(int c=0;c<b;c++){
                    cout<<" ";



                }
                cout <<"*";
                
            }




        }


        n=n-1;
        b=b+2;

        cout<<endl;
 











    }  


    for(int s=0;s<4;s++){

        for(int t=0;t<=s;t++){
            cout<<" ";

        }

        for(int z=s;z<=s;z++){
            if(z==3){
                cout<<"*";
            }
            else{
                cout<<"*";
               for(int l=0;l<h;l++){
                cout<<" ";




               }
               cout<<"*";





            }


        }
        cout<<endl;
        h=h-2;









    }










}