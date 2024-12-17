#include<iostream>
using namespace std;

int main(){
    int intVar = 10;
    char charVar = 'A';
    float floatVar = 3.14;
    double doubleVar = 3.14159;
    bool boolVar = true;


    int *intptr = &intVar;
    char *charptr = &charVar;
    float *floatptr = &floatVar;
    double *doubleptr = &doubleVar;
    bool *boolptr = &boolVar;

    cout << "All datatypes prints : " << endl;
    cout << " int : value = " << *intptr << ", " << "address = " << intptr << endl;
    cout << " char : value = " << *charptr << ", " << "address = " << charptr << endl;
    cout << " float : value = " << *floatptr << ", " << "address = " << floatptr << endl;
    cout << " double : value = " << *doubleptr << ", " << "address = " << boolptr << endl;
    cout << "bool : value = " << *boolptr << ", " << "address = " << boolptr << endl;
    return 0;
}
