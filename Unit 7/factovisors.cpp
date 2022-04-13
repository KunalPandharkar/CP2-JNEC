#include <bits/stdc++.h>
using namespace std;



int main() {
      int a,b,i,flag=0;
      while(scanf("%d %d",&a,&b) != EOF) {
        long int fact=1L;
       
        for(i=1;i<=a;i++){    
            fact=fact*i;
            if(fact % b == 0){
               flag=1;
            }
            else{
                flag=0;
            }
         }
         if(flag){
               cout << b << " divides " << a << "!\n";
               
            }
            else{
                cout << b << " does not divides " << a << "!\n";
               
            }
        
    }
}
