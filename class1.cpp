#include <iostream>
#include <math.h>

using namespace std;


int main(){
    double a,b,c,x1,x2,descr;

    cout<<"Enter the coefficient a=";

    cin>>a;

    cout<<"Enter the coefficient b=";

    cin>>b;

    cout<<"Enter the coefficient c=";

    cin>>c;

    descr = (b*b)-(4*a*c);

    if(descr>0){
        x1 = (-b + sqrt(descr))/(2*a);

        x1 = (-b + sqrt(descr))/(2*a);

        cout<<"x1="<<x1<<""<<"x2="<<x2;
    }

    if (descr ==0){
        x1 = -b/(2*a);
        x2=x1;

        cout<<"equal root x1=x2"<<x1;
    }

    if(descr <0 ){
        cout<<"Complex root";
    }

    return 0;
}