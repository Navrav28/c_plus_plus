
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
// 1 2 4 3 9 .....10 100
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
// cube
// 1 2 8 3 27 .....10 1000
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

// 1 1 2 4 7 11 16 22
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 1, m = 1;
//     while (a <= 22)
//     {
//         cout << a << endl;
//         a = a + m;
//         m++;
//     }

//     return 0;
// }

// 1 10 2 9 ....10 1

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 1, m = 10;
//     while (a <= 10)
//     {
//         cout << a << endl;
//         cout << m << endl;
//         a++;
//         m--;
//     }

//     return 0;
// }

// 0 1 1 2 3 5 8 13 21
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 0, b= 1 ,c =  0 ;

//         cout << a << endl;
//         cout << b << endl;
//     while (a < 13)
//     {
//         c = a + b;
//         cout << c << endl;
//         a = b;
//         b = c;

//     }

//     return 0;
// }

// 1024 512 256 128 64
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 1024;

//     while (a >= 64)
//     {

//         cout << a << endl;
//         a = a / 2;
//     }

//     return 0;
// }

// prime no 2 aproach
// #include <iostream>
// using namespace std;
// int main()
// {
//     int x = 5, f = 0, i = 2;
//     if (x == 2)
//     {
//         cout << "prime no" << endl;
//         return 0;
//     }
//     while (i < x)
//     {

//         if (x % i == 0)
//         {
//             f = 1;
//         }
//         i++;
//     }

//     if (f == 0)
//     {
//         cout << " prime no" << endl;
//     }
//     else
//     {
//         cout << " not prime no" << endl;
//     }
//     return 0;
// }

// tringle pattern
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i = 1, j, k, l;
//     while (i <= 5)
//     {
//         k = 1;
//         while (k < i)
//         {
//             cout << " ";
//             k++;
//         }
//         j = i;
//         while (j <= 5)
//         {
//             cout << j << " ";
//             j++;
//         }
//         cout<< endl;
//         i++;
//     }
//     return 0;
// }

// 12345
//  2345
//   345
//    45
//     5
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i = 1, j, k, l;
//     while (i <= 5)
//     {
//         k = 1;
//         while (k < i)
//         {
//             cout << " ";
//             k++;
//         }
//         j = i;
//         while (j <= 5)
//         {
//             cout << j;
//             j++;
//         }
//         cout<< endl;
//         i++;
//     }
//     return 0;
// }

//     1
//    12
//   123
//  1234
// 12345
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i = 1, j, k, l;
//     while (i <= 5)
//     {
//         k = 1;
//         while ( k<=5-i)
//         {
//             cout << " ";
//             k++;
//         }
//         j = 1;
//         while (j <= i)
//         {
//             cout << j;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

//     1
//    121
//   12321
//  1234321
// 123454321
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i = 1, j, k, l;
//     while (i <= 5)
//     {
//         k = 1;
//         while ( k<=5-i)
//         {
//             cout << " ";
//             k++;
//         }
//         j = 1;
//         while (j <= i)
//         {
//             cout << j;
//             j++;
//         }
//         l = i - 1;
//         while(l>0){
//             cout << l;
//             l--;
//         }
//         cout << endl;
//         i++;

//     }
// }

// 1       3       5       7       9
// 2       4       6       8       10
// 3       5       7       9       11
// 4       6       8       10      12
// 5       7       9       11      13
// #include <iostream>
// using namespace std;
// int main()
// {
//     int r = 1, c, num;

//         while (r <= 5)
//     {
//         num = r;
//         c = 1;
//         while (c <= 5)
//         {
//             cout << num << "\t";
//             num += 2;
//             c++;
//         }
//         cout << endl;
//         r++;
//     }
// }

//  Array start
// reverse array
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     for (int i = 4; i >= 0; i--)
//     {
//         cout << arr[i] << "\t";
//     }
//     cout << endl;
//     return 0;
// }

// copy array  1D
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int x[5] , j = 0;
//     for (int i = 0; i < 5; i++)
//     {
//         x[j] = arr[i];
//         j++;
//     }
//     for (int i = 0; i <= 4; i++)
//     {
//         cout << x[i] << "\t";
//     }
//     return 0;
// }

// sum of all elements in 2D array
// #include <iostream>
// using namespace std;

// int main() {
//  int arr[3][3]={
//      {1,2,3,},
//      {4,5,6},
//      {7,8,9}
//      };
//      int k = 0;
//      for (int i = 0 ; i<3 ; i++){
//            for (int j = 0 ; j<3 ; j++){
//               k = k + arr[i][j];
//            }
//      }

//     cout << k;

//     return 0;
// }

// transpose of matrix 2D array
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[2][3] = {
//         {
//             1,
//             2,
//             3,
//         },
//         {4, 5, 6},
//     };
//     int arr2[3][2];

//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             arr2[j][i] = arr[i][j];
//         }
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             cout << arr2[i][j] << "\t";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// copy of matrix 2D array
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[2][3] = {
//         {
//             1,
//             2,
//             3,
//         },
//         {4, 5, 6},
//     };
//     int arr2[3][2];

//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             arr2[i][j] = arr[i][j];
//         }
//     }
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << arr2[i][j] << "\t";
//         }
//         cout << endl;
//     }

//     return 0;
// }
// largest no in array
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {
//         2,
//         8,
//         3,
//         6,
//         10
//     };
//     int temp = arr[0];

//     for (int i = 0; i < 5; i++)
//     {
//            if (arr[i] > temp){
//                temp = arr[i];
//            }
//     }
//     cout << "largest no " << temp << endl;

//     return 0;
// }
// decending order shorting array
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = { 2,1,28,6,10 };
//     // int arr2[4]={};
//     // int j = 0;
//     int temp, i, j;

//     for (i = 0; i < 5; i++)
//     {

//         for (j = i + 1; j < 5; j++)
//         {
//             if (arr[i] < arr[j])
//             {
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     for (i = 0; i < 5; i++)
//     {
//         cout << "decending array short " << arr[i] << endl;
//     }

//     return 0;
// }

// ascending order shorting array
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = { 2,1,28,6,10 };
//     // int arr2[4]={};
//     // int j = 0;
//     int temp, i, j;

//     for (i = 0; i < 5; i++)
//     {

//         for (j = i + 1; j < 5; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     for (i = 0; i < 5; i++)
//     {
//         cout << "decending array short " << arr[i] << endl;
//     }

//     return 0;
// }
// occuring array
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {2, 2, 1, 8, 1, 10 ,8};
//     int arr2[4]={};
//     int k = 0;
//     // int j = 0;
//     int temp, i, j;

//     for (i = 0; i < 7; i++)
//     {

//         for (j = i + 1; j < 7; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                arr2[k] = arr[j];
//                k++;
//             }
//         }
//     }
//     for (i = 0; i < k; i++)
//     {
//         cout << "occuring array " << arr2[i] << endl;
//     }

//     return 0;
// }
// fetch prime no. in array
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {
//         2,
//         9,
//         7,
//         11,
//         3,
//     };
//     int arr2[4] = {};
//     int k = 2;
//     // int j = 0;
//     int f = 0, i, j ,l=0;

//     for (i = 0; i < 5; i++){
//        f = 0;
//        for (j = 2; j < arr[i]; j++)
//        {
//         if (arr[i] % j == 0)
//         {
//             f = 1;
//             // break;
//             // cout << "hhh " << endl;

//         }
//         }
//         if (f == 0)
//         {
//             arr2[l] = arr[i];
//             // cout << "aaa " << endl;
//             l++;
//         }

//     }
//     for (i = 0; i < 4; i++)
//     {
//         cout << "these are prime num in  array " << arr2[i] << endl;
//     }

//     return 0;
// }

//  2 array merge in another array
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = { 2,1,28,3,11 };
//     int arr2[] = { 9,1,6,7,10 };
//     int l = 0;
//     // int arr2[4]={};
//     // int j = 0;
//     int temp, i, j , c[]={} ;

//     for (i = 0; i < 5; i++)
//     {
//         c[i] = arr[i];

//     }
//         for (i = 0; i < 5; i++)
//     {
//         c[i] = arr2[i];

//     }
//         for (i = 0; i < 10; i++)
//     {

//         for (j = i + 1; j < 10; j++)
//         {
//             if ( c[i]  > c[j])
//             {
//                 temp = c[i];
//                 c[i] = c[j];
//                 c[j] = temp;
//             }
//         }
//     }
//     for (i = 0; i < 10; i++)
//     {
//         cout << "decending array short " << c[i] << endl;
//     }

//     return 0;
// }
// number search in array
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {2, 4, 3, 8};
//     int search = 4, i;
//     for ( i = 0; i < 4; i++)
//     {
//       if (arr[i]==search)
//       {

//           cout << "number searched" << arr[i];

//       }

//     }
//     for ( i = 0; i < 4; i++)
//     {
//        cout << "number repleced" << arr[i] << endl;
//     }

//     return 0;
// }
// replce number in array
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {2, 4, 3, 8};
//     int searchNum = 4, i;
//     for ( i = 0; i < 4; i++)
//     {
//       if (arr[i]==searchNum)
//       {
//           arr[i] = 10;
//         //   cout << "number searched" << arr[i];

//       }

//     }
//     for ( i = 0; i < 4; i++)
//     {
//        cout << "number repleced " << arr[i] << endl;
//     }

//     return 0;
// }
// second largest number in array
// #include <iostream>
// using namespace std;
// int main()
// {
//   int arr[50], i, j = 0, n, lrg, lrg2nd;

//   cout << "enter the size of array " << endl;
//   cin >> n;
//   for (i = 0; i < n; i++)
//   {
//     cin >> arr[i];
//   }
//   // finding location of large number
//   lrg = 0;
//   for (i = 0; i < n; i++)
//   {
//     if (lrg < arr[i])
//     {
//       lrg = arr[i];
//       j = i;
//     }
//   }
//   // ignoring largest number  and finding second largest
//   lrg2nd = 0;
//   for (i = 0; i < n; i++)
//   {
//     if (i == j)
//     {
//       i++;
//       i--;
//         }
//     else
//     {
//       if (lrg2nd < arr[i])
//       {
//         lrg2nd = arr[i];
//       }
//     }

//   }
//    cout << "second largest number is " << lrg2nd << endl;
//     return 0;
// }

// delete number in array
// #include <iostream>
// using namespace std;
// int main()
// {
//   int arr[50], i, j, n, s, f = 0;
//   cout << "enter the size of array " << endl;
//   cin >> n;
//   for (i = 0; i < n; i++)
//   {
//     cout << "enter the element in array " << endl;

//     cin >> arr[i];
//   }
//   cout << "enter the number to delete " << endl;
//   cin >> s;
//   for (i = 0; i < n; i++)
//   {

//     if (arr[i] == s)
//       f = 1;
//     {
//       for (j = i; j < n - 1; j++)
//       {
//         arr[j] = arr[j + 1];
//         // cout << arr[j];
//       }
//       n--;
//       break;
//     }

//   }

//   if (f == 1)
//   {
//     for (i = 0; i < n; i++)
//     {
//       cout << arr[i] << '\t';
//     }
//   }
//   else
//   {
//     cout << "element not found " << endl;
//   }

//   return 0;
// }

// remove duplicate number in array
// #include <iostream>
// using namespace std;
// int main()
// {
//   int arr[50], i, j, n, s, f = 0, k;

//   cout << "enter the size of array " << endl;
//   cin >> n;
//   for (i = 0; i < n; i++)
//   {
//     cout << "enter the element in array " << endl;

//     cin >> arr[i];
//   }
//   // cout << "enter the number to delete " << endl;
//   // cin >> s;
//   for (i = 0; i < n; i++)
//   {

//     for (j = i + 1; j < n; j++)
//     {
//       if (arr[i] == arr[j])
//       {
//         for (k = j; k < n - 1; k++)
//         {
//           arr[k] = arr[k + 1];
//         }
//         n--;
//       }
//     }
//   }

//   for (i = 0; i < n; i++)
//   {
//     cout << arr[i] << '\t';
//   }

//   return 0;
// }

// check array element is palindrome or not

// #include <iostream>
// using namespace std;
// int main()
// {
//   int arr[50], i, j, n, f = 0;
//   cout << "enter the size of array " << endl;
//   cin >> n;
//   for (i = 0; i < n; i++)
//   {
//     cout << "enter the element in array " << endl;

//     cin >> arr[i];
//   }
//   int start = 0;
//   int end = n - 1;
//   for (; start < end; start++, end--)
//   {
//     if (arr[start] != arr[end])
//     {
//       f = 1;
//       break;
//     }
//   }
//   if (f == 0)
//   {
//     cout << "this array is palindrome " << endl;
//   }
//   else
//   {
//     cout << "this array is not palindrome " << endl;
//   }
//   return 0;
// }


// insert one element in array
#include <iostream>
using namespace std;
int main()
{
  int arr[50], i, j, n, insert;
  cout << "enter the size of array " << endl;
  cin >> n;
  for (i = 0; i < n; i++)
  {
    cout << "enter the element in array " << endl;

    cin >> arr[i];
  }
  cout << "enter the element to insert " << endl;
  cin >> insert;
  cout << "print old element array " << endl;
  for (i = 0; i < n; i++)
  {
    cout << arr[i] << '\t';
  }

  cout << endl;
  arr[n] = insert;
  n++;
  
 cout << "print new element array "<< endl;
  for (i = 0; i < n; i++)
  {
    cout << arr[i] << '\t';
  }
  return 0;
}