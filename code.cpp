#include<iostream>
using namespace std;
 
int main(){
    int x;
    int* ptr;
    ptr = &x;
    *ptr = 40;
    cout << x << endl;
    cout << ptr <<endl;

    int y = 30;
    int *ptr1;
    ptr1 = &y;
    cout << *ptr1 << endl;

    *ptr1 = 10;
    cout << y << endl;

    return 0;
}