//EXPERIMENT-6
//Vaishnavi Pangare
//25070123501
//ENTC A3
//TITLE: Write a program which takes a num from user and print the digits in reverse order.


#include <iostream>
using namespace std;

int main() {
    int num;
    int N;

    cout << "Enter num:" << endl;
    cin >> num;

    while (num != 0) {
        N = num % 10;
        num = num / 10;  // <- This line must update num
        cout << N << endl;
    }

    return 0;
}


/*output:
Enter num:
23069
9
6
0
3
2
*/
