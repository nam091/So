#include<stdio.h>
#include<math.h>

// La Phuong Nam - AT190536

int main(){
    int a,b,c;
    double delta,x1,x2,x;

    scanf("%d%d%d", &a, &b, &c);

    if(a==0)
        if(b==0)
            if(c==0) printf("INF");
            else printf("NO");
        else{
                x = (double)(-c)/b;
                printf("%.2lf", x);
            }
    else{
        delta = b*b-4*a*c;
        if(delta<0) printf("NO");
        else if(delta == 0) printf("%.2lf", (round( (double)(-b/(2*a)) * 100))/100);
        else{
            x1=(double)(-b+sqrt(delta))/(2*a);
            x2=(double)(-b-sqrt(delta))/(2*a);
            if(x1<x2)
                printf("%.2lf %.2lf", (round(x1*100)/100), (round(x2*100)/100));
            else 
                printf("%.2lf %.2lf", (round(x2*100)/100), (round(x1*100)/100));
        }
    }
    return 0;
}