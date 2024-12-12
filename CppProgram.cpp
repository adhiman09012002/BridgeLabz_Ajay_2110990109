#include<iostream>
using namespace std;
int main(){
   /*int a = 123;
   cout << a << endl;

   char b = 'v';
   cout<< b << endl;

   bool bl = true;
   cout << bl << endl;

   double d = 1.23;
   cout << d << endl;

   float f = 1.2;
   cout << f << endl;

   int size = sizeof(a);
   cout << "Size of a is :"<< size << endl;
*/

  /* int a = 'a';
   cout << a << endl;


   char ch = 98;
   cout << ch << endl;
    
    
    char ch1 = 123456;
    cout << ch1 << endl;
    */

   /* unsigned int a = 112; // unsigned value positive hai toh value same aaye gi.
    cout << a << endl;

    unsigned int a = -112; // unsigned value negative hai toh large value aaye gi.
    cout << a << endl;
    */


    // ****************** operators *************

    // Arithmatic operators

    /*int a =  2/5;
    cout << a << endl;
    float b =  2.0/5;
    cout << b << endl;
    double c =  2.0/5;
    cout << c << endl;
   */

// Relational operators

 /*int a = 2;
 int b = 3;

 bool first = (a==b);
 cout << first << endl;

 bool second = (a>b);
 cout << second << endl;

 bool third = (a<b);
 cout << third << endl;

 bool fourth = (a>=b);
 cout << fourth << endl;

 bool fifth = (a<=b);
 cout << fifth << endl;

 bool sixth = (a!=b);
 cout << sixth << endl;
*/

// ************ Conditionals & Loop ***********

/*int a;
cin>>a;

if(a>0){
    cout << "A is Positive" << endl;
}else{
    cout << "A is Negative" << endl;
}*/

// write a code find the value between  a and b is  greater. 

/*int a,b; 

cout<<"Enter the value of a "<< endl;
cin>>a;
cout<<"Enter the value of b "<< endl;
cin>>b;

if(a>b){
    cout<<"A is greater "<<endl;
}
if(b>a){
    cout<<"B is greater"<<endl;
}*/

// write a code to find +ve, -veand 0

/*int a;
cout<<"Enter the value of a "<<endl;
cin>>a;

if(a>0){
    cout<<"A is positive"<<endl;
}else{
    if(a<0){
        cout<<"A is negative"<<endl;
    }else{
        cout<<"A is Zero"<<endl;
    }
}*/

//find out the lowercase , uppercase and numberic.

/*char ch ;
cin>>ch;
if(ch>='a'&&ch<='z'){
    cout<<"This is Lowercase";
}else if(ch>='A'&&ch<='Z'){
    cout<<"This is Uppercase";
}else if(ch>='0'&&ch<='9'){
    cout<<"This is Numeric";
}else{
    cout<<"Try again";
}*/



//  print the value 1 to 5 using while loop.


/*int n;
cin>>n;
int i=1;
while(i<=n){
    cout<<i<<endl;
    i = i+1;
}*/




// print the sum of 1 to n.

/*int n;
cin>>n;
int sum=0;
int i=1;

while(i<=n){
    sum = sum+i;
    i = i+1;
}
cout<<sum<<endl;
*/


// find sum of all even numbers.

/*int n;
cin>>n;
int sum=0;
int i =2;

while(i<=n){
    sum = sum +i;
    i= i+2;
}
cout<< sum << endl;
*/


// find a number prime or not.

/*int n;
cin>>n;

int i =2;

while(i<n){
    if(n%i==0){
        cout<<"not Prime number"<<endl;
    }else{
        cout<<"Prime number"<<endl;
    }
    i= i+1;
}*/

// ********** pattern **********

/*int n;
cin>>n;

for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cout<<"*";
    }
    cout<<endl;
}*/

//  1111
//  2222
//  3333
//  4444
// print this pattern


/*int n;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cout<<i;
    }
    cout<<endl;
}*/

// print this pattern 
// 12345
// 12345
// 12345
// 12345
// 12345


/*int n;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cout<<j;
    }
    cout<<endl;
}*/


// print this pattern
// 4321
// 4321
// 4321
// 4321

/*int n;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cout<<n-j+1;
    }
    cout<<endl;
}*/

//print this pattern
// 12345
// 678910
// 1112131415
// 1617181920
// 2122232425

/*int n;
cin>>n;
int count = 1;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cout<<count;
        count = count+1;
    }
    cout<<endl;
}*/


// print the pattern of *

/*int n;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
}*/

int n;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<i;
    }
    cout<<endl;
}








    return 0;
}
