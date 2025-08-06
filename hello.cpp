
// basic structure of c++
// # include <iostream>
// using namespace std;
// int main() {
//     cout << "hello world " << endl;
//      return 0;
// }

// using if else
// # include <iostream>
// using namespace std;
// int main(){
//     int marks;
//     marks = 90;
//     if (marks >= 50)
//     {
//          if (marks>= 90){
//              cout << "A++" << endl;
//          }
//          else if (marks >=75){
//              cout << "B++" << endl;
//          }
//          else if (marks >=50){
//              cout << "c++" << endl;
//          }

//     }
//     else {
//         cout << "fail" << endl;
//     }
//     return 0;
// }

// while loop
// 1 to 100 even no;
// #include <iostream>
// using namespace std;

// int main()
// {
//     int a;
//     a = 1;
//     while (a <= 100)
//     {
//         if (a % 2 == 0)
//         {
//             cout << "print even no " << a << endl;
//         }
//         a++;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 1; // initialize variable

//     while (a <= 100)
//     {
//         if (a % 2 == 0)
//         {
//             cout << "print even no " << a << endl;
//         }
//         a++;
//     }

//     return 0;
// }

// print table
// #include <iostream>
// using namespace std;

// int main()
// {
//     int a ,b;
//     a = 1;
//     b = 5;
//     while (a <= 10)
//     {

//             cout << "print table no  " << a*b << endl;

//         a++;
//     }
//     return 0;
// }

// number square
// #include <iostream>
// using namespace std;
//  int main(){
//      int a = 1, b = 5 , c;
//      while (a<=b){
//          c = a * a;
//          cout << c << endl;
//          a++;
//      }
//      return 0;
//  }

// fectorial  + sum 
#include <iostream>
using namespace std;
int main()
{
    int a = 5, b = 1, c, d=0 ,f;
    while (a >= 1)
    {
        b= b * a;
        d = d + a;
        a--;
    }
    cout << "factorial => " << b  << "\n sum " << d << endl;

    return 0;
}