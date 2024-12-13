#include<iostream>
#include<math.h>
using namespace std;

int main(){

    // Bitwise Operators => AND, OR, NOT and XOR

    /*int a = 4;
    int b = 6;

    cout<<" a & b " << (a&b) <<endl;
    cout<<" a | b " << (a|b) <<endl;
    cout<<" a ~ b " << ~a <<endl;
    cout<<" a ^ b " << (a^b) <<endl;*/

    // Left and Right Shifting 

    /*cout<<(17>>1) << endl;
    cout<<(17>>2) << endl;
    cout<<(19<<1) << endl;
    cout<<(21<<2) << endl;*/


    // Increment and Decrement operators

    /*int i = 7;

    cout<< (++i) << endl;
    // 8 => post increment
    cout<< (i++) << endl;
    // 8 , i = 9  => pre increment
    cout<< (i--) << endl;
    // 9 , i = 8 => post decrement
    cout<< (--i) << endl;
    // 7, i = 7 => pre decrement
    */

    // write a code for Fibonacci Series

    /*int n =10;
    int a = 0;
    int b = 1;
    cout<< a<<" "<<b<<" ";

    for(int i=1;i<=n;i++){
        int nuxtNumber = a+b;
        cout<<nuxtNumber<<" ";

        a=b;
        b= nuxtNumber;
    }*/

    // break Keyword

    /*int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        if(i==5){
            break;
        }
        cout<<i<<endl;
    }*/

    // continue keyword

    /*int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        if(i==6){
            continue;
        }
        cout<<i<<endl;
    }*/

// Scope variable

/*int a =3;
cout<<a <<endl;// first scope 

if(true){
    int a =5;
    cout<< a<<endl;// second scope
}*/

// Operator Precedence  => 
//using Brackets


// leetcode question number 1281.
// subtract the product and sum of digits of an integer
// Solution

/*int n;
cin>>n;

int prod = 1;
int sum = 0;

while(n!=0){
    int digit = n%10;
    prod = prod*digit;
    sum = sum + digit;

    n = n/10;
}

int answer = prod-sum;
cout<<answer<<endl;
*/


//leetcode question number 191.
// Number of 1 bits
// solution

   /*int n;
    cin>>n;

    int count = 0;
    while(n!=0){    
        // checking last bit
        if(n&1){
            count++;
        }
        n = n>>1;

}
    cout<<count<<endl;
    */


    // Decimals & Binary
  
  
  //  Decimal to binary convert

    /*int n;
    cin>>n;

    int ans = 0;
    int i = 0;
    while(n != 0){
       int bit = n & 1;
       ans = (bit * pow(10, i)) + ans;

       n = n>>1;
       i++;
    }

     cout <<ans<<endl;
     */

     // Binary to decimal convert


       int n;
       cin>>n;
        
       int ans =0;
       int i=0;

       while(n!=0){
        int digit = n%10;

        if(digit == 1){
         ans = ans + pow(2,i);
         
        }
         n = n/10;
         i++;
        
       }
   

   cout<<ans<< endl;
    return 0;
}
