//
// Created by ddevasenapathy on 11/9/2023.
//
#include<iostream>
using namespace std;
#include "fac.h"
void fac::input()
{
    cout<<"\nEnter any number :: ";
    cin>>n;
}

void fac::calc()
{
    n1=n;
    if(n==0||n==1)
        cout<<"\nFactorial of Number [ "<<n<<" ] is :: 1\n";
    else
    {
        while(n>0)
        {
            f=f*n;
            n--;
        }
    }

}

void fac::display()
{
    cout<<"\nFactorial of [ "<<n1<<" ] is :: "<<f<<"\n";
}

