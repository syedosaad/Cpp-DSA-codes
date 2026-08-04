/*

*      *
**    **
***  ***
********
********
***  ***
**    **
*      *

              */

#include <iostream>

using namespace std;

int main(){
    
    int n=4;
    
    
    //top
    for(int i=0; i<n;i++){
        //top left
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        //top space
        if(i !=n){
        for(int j=0; j<2*(n-i-1); j++){
            cout<<" ";
        }
        //top right fill
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
    cout<<endl;
    }
}
    
    //Bottom
    for(int i=0; i<n; i++) {
        
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        //Bottom space
            for(int j=0;j<i*2;j++){
                cout<<" ";
            }
         for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    
}
}
