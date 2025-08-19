
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
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 5, b = 1, c, d=0 ,f;
//     while (a >= 1)
//     {
//         b= b * a;
//         d = d + a;
//         a--;
//     }
//     cout << "factorial => " << b  << "\n sum " << d << endl;

//     return 0;
// }

// 1 to 50 table print
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b;
//     a = 1;
//     while (a <= 50)
//     {
//         b = 1;
//         while (b <= 10)
//         {
//             cout << a * b << endl;
//             b++;
//         }
//         a++;
//     }
//     return 0;
// }

// prime number
// #include <iostream>
// using namespace std;
// int main()
// {
//     int x = 10 ,f = 0, i=2;

//     while (i <= x/2 )
//     {
//         if (x% i == 0)
//         {
//             f= 1;
//             break;
//         }
//         i++;
//     }

//     if (f == 1)
//     {
//         cout << " not prime no" << endl;

//     }
//     else
//     {
//         cout << "prime no" << endl;

//     }
// }

// reverse number
// #include <iostream>
// using namespace std;
// int main()
// {
//     int x = 123, m;

//     while (x>0)
//     {
//         m = x % 10;
//         cout << m << endl;
//         x = x / 10;
//     }
//    return 0;

// }
// palindrome
// #include <iostream>
// using namespace std;
// int main()
// {
//     int x = 757, m, y, z=0;
//     y= x;
//     while (x > 0)
//     {
//         m = x % 10;

//         z = (z * 10) + m;
//         cout << m << endl;
//         x = x / 10;
//     }
//     if (y == z)
//     {
//         cout << "palindrome" << endl;
//     }
//     else
//     {
//         cout << "not palindrome" << endl;
//     }
//     return 0;
// }

// 1 ,2, 4,8 ....256
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 1, m;
//     while (a <= 256)
//     {
//         // m = a * a;
//         cout << a << endl;
//         a = a * 2;
//     }

//     return 0;

// }

// 1 10 100 1000 10000
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 1, m;
//     while (a <= 10000)
//     {
//         // m = a * a;
//         cout << a << endl;
//         a = a * 10;
//     }

//     return 0;

// }

// 10000 1000 100 10 1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 10000, m;
//     while (a >= 1)
//     {
//         // m = a * a;
//         cout << a << endl;
//         a = a / 10;
//     }

//     return 0;

// }

// square 
//1 2 4 3 9 .....10 100
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 1, m;
//     while (a <= 10)
//     {
//         cout << a << endl;

//         m = a * a;
//         cout << m << endl;
//         a++;
//     }

//     return 0;
// }
//cube
//1 2 8 3 27 .....10 1000
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 1, m;
//     while (a <= 10)
//     {
//         cout << a << endl;

//         m = a * a * a;
//         cout << m << endl;
//         a++;
//     }

//     return 0;
// }





#include <iostream>
using namespace std;
int main()
{
    int a = 1, m = 1;
    while (a <= 22)
    {
        cout << a << endl;
        a = a + m;
        m++;
    }

    return 0;
}