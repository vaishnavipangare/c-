//EXPERIMENT-6
//PALAK SONI
//24070123069
//ENTC A3
//TITLE: Write a program using for loop.

#include <iostream>
using namespace std;
int main() {
 for(int i=1;i<=2;++i){
     cout<<"Outer:"<<i<<"\n";
     for(int j=1;j<=3;++j){
         cout<<"Inner:"<<j<<"\n";
     }
 }

    return 0;
}



/*Output:-
Outer:1
Inner:1
Inner:2
Inner:3
Outer:2
Inner:1
Inner:2
Inner:3
*/
