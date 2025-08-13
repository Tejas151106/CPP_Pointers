
#include <iostream>
using namespace std;

int main() {
    int a=10;
    int *aptr;
    aptr=&a;
    
    cout<<"Before Increment:"<<aptr<< endl;
      
        
        aptr++;
        cout<<"After Increment:"<<aptr<<endl;
    

   float b=12.2;
   float *bptr;
    bptr=&b;
    
    cout<<"Before Increment:"<<bptr<< endl;
      
        
        bptr++;
        cout<<"After Increment:"<<bptr<<endl;
        
 double c=15;
   double *cptr;
    cptr=&c;
    
    cout<<"Before Increment:"<<cptr<< endl;
      
        
        cptr++;
        cout<<"After Increment:"<<cptr<<endl;
        
        
   bool d=5;
   bool *dptr;
    dptr=&d;
    
    cout<<"Before Increment:"<<dptr<< endl;
      
        
        dptr++;
        cout<<"After Increment:"<<dptr<<endl;
        
        

       
            
        
       
        
    

    return 0;
}
