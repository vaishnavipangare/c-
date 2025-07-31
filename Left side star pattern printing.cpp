//EXPERIMENT-6
//Vaishnavi Pangare
//2570123501
//ENTC A3
//TITLE: Print a right side aligned star pattern  using for loop.

#include <iostream>
using namespace std;

int main() {
    int i, j;
    int n = 5;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}


/*Output:-
*
**
***
****
*****

*/
