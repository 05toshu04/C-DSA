#include<iostream>
using namespace std;
int main(){
   
    
    
    int row;
    cout<<"enter only odd number of rows in a hollow diamond";
    
    cin>>row;
    int h=row-3;

    for(int i=0;i<row/2+1;i++){



        for(int j=i;j<row/2+1;j++){
            cout<<" ";




        }

        for(int k=i;k<=i;k++){
            if(k==0){
                cout<<"*";
            }

            else {
                cout<<"*";

                for(int c=0;c<i*2;c++){
                    cout<<" ";



                }
                cout <<"*";
                
            }




        }


        
        

        cout<<endl;
 











    }  


    for(int s=0;s<row/2;s++){

        for(int t=0;t<=s;t++){
            cout<<" ";

        }

        for(int z=s;z<=s;z++){
            if(z==row/2-1){
                cout<<"*";
            }
            else{
                cout<<"*";
               for(int l=0;l<=h;l++){
                cout<<" ";




               }
               cout<<"*";





            }


        }
        cout<<endl;
        h=h-2;









    }










}