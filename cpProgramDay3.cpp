// #include<iostream>
// using namespace std;
// int incrementByOne(int a){
//     // a = a+1;
//     ++a;
//     return a;
// }
// int main(){
//     int a = 10;
//     incrementByOne(a);
//     cout << a;
//     return 0;
// }



// #include<iostream>

// using namespace std;

// int incrementByOne(int &x){

//     ++x;

//     return x;
// }

// int main(){
//     int a = 10;

//     // int *ptr = &a;

//     int *ptr = new int(10);

//     cout << a << endl;

//     incrementByOne(a);

//     cout << a;

// }


// #include<iostream>

// using namespace std;

// int main(){
//     // int a = 10;
//     // int *ptr = &a;

//     // cout<< ptr << endl;
//     // cout<< &a << endl;


// //   pointer to pointer 

//     int a = 10;

//     int *ptr = &a;

//     int **parPtr = &ptr;
    
//     // cout << &ptr << endl;

//     // cout << parPtr << endl;
//     // Defeference Operator

//     cout << *(&a) << endl;
//     cout << *(ptr) << endl;
//     return 0;
// }

// practice question 

// #include<iostream>

// using namespace std;

// int main(){
//     int a = 5;
//     int *p = &a;
//     int **q = &p;

//     cout << *p << endl;
//     cout << **q << endl;
//     cout << p << endl;
//     cout << *q << endl;
//     return 0;
// }


// pass by value 

// #include<iostream>

// using namespace std;

// void changedA(int a){
//     a = 20;
// }
// int main(){
//     int a = 10;
//     changedA(a);

//     cout << a << endl;

//     return 0;
// }



// pass by reference 
// #include<iostream>

// using namespace std;

// void changedA(int *ptr){
//     *ptr = 20;
// }
// int main(){
//     int a = 10;
//     changedA(&a);

//     cout << a << endl;

//     return 0;
// }

//  pass by reference using alias 

// #include<iostream>

// using namespace std;

// void changedA(int &b){ // pass by reference using alias
//     b = 20;
// }

// int main(){
//     int a = 10;
//     changedA(a);

//     cout << a << endl;
//     return 0;
// }


// Array pointer 

#include<iostream>

using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5};

    cout << arr <<endl;
    cout << *arr <<endl;
}
