#include<iostream>
using namespace std;

//pointer struct 
struct rectangle{
    int* length;
    int* breadth;
    int area(){
        return (*length) * (*breadth);
    }
};

struct square{
    int* side;
    int area(){
        return (*side) * (*side);
    }
    
};

int main(){

    int a=10, b=20, c=30,D=0,A=0,S=0;;

    int *p1, *p2, *p3, *p4, *psum, *p6;

    p1 = &a; p2 = &b; p3 = &c, p4 = &D, psum = &A, p6 = &S;

    //Addition using pointer
    *psum = *p1 + *p2 + *p3;
    cout << "Addition of a, b, c is : " << *psum << endl;

    //Subtraction using pointer
    *p6 = *p3 - *p2 - *p1;
    cout << "Subtraction of c, b, a is : " << *p6 << endl;

    //Addition using double pointer
    int **pp1, **pp2, **pp3;
    pp1 = &p1; pp2 = &p2; pp3 = &p3;
    *psum = **pp1 + **pp2 + **pp3;
    cout << "Addition of a, b, c using double pointer is : " << *psum << endl;

    //swaping number in pointer code

    int first = 12;
    int second =34;
    int temp;
    int *pfirst = &first;
    int *psecond = &second;
    cout << "Before swapping: " << *pfirst << " " << *psecond << endl;
    int *ptemp = &temp;
    *ptemp = *pfirst;
    *pfirst = *psecond;
    *psecond = *ptemp;
    cout << "After swapping: " << *pfirst << " " << *psecond << endl;

    //finding area of rectangle using struct pointer
    struct rectangle r;
    r.length = &a;
    r.breadth = &b;
    cout << "Area of rectangle is : " << r.area() << endl; 

    //finding area of square using struct pointer
    struct square s;
    s.side = &c;
    cout <<" area od square: " << s.area() << endl;
 
    return 0;
}