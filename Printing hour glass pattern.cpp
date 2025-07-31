//EXPERIMENT-6
//Vaishnavi Pangare
//25070123501
//ENTC A3
//TITLE: Print hour glass pattern.

#include <iostream>
using namespace std;
int main(){
    int i, j, k;
    int n = 5;
    
    for(i = n; i >= 1; i--){
        
        for(k = 1; k<= n - i; k++){
            cout << " ";
        }
        
        for(j = 1; j <= i ; j++){
            cout << "* ";
        }
        cout << endl;
    }
     for(i = 2; i <= n; i++){
       
        for(k = 1; k<= n - i; k++){
            cout << " ";
        }
        
        for(j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

 
 /*Output:-
 
 * * * * * 
 * * * * 
  * * * 
   * * 
    * 
   * * 
  * * * 
 * * * * 
* * * * * 

 */ 
