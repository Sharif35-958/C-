#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int *p1,*p2;
    int num1=10;
    int num2=20;

    p1= &num1;
    p2= &num2;
    int sum= *p1 + *p2;
    cout<< sum;
    getch();
}
