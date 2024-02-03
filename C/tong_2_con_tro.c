#include<stdio.h>
#include<math.h>

int main(){
    double a[2];
    double *ptr= NULL;
    char chr;
    scanf("%lf%lf", &a[0], &a[1]);
    scanf("\n%c",&chr);
    ptr = &a[0];
    switch(chr){
        case '+':
         printf("%d",(int)(*ptr +  *(ptr+1)));
         break;
        case '-':
         printf("%d",(int)(*ptr -  *(ptr+1)));
         break;
        case '*':
         printf("%d",(int)(*ptr *  *(ptr+1)));
         break;
        case '/':
         if(*(ptr+1)==0) printf("INF");
         else printf("%lf",*ptr /  *(ptr+1));
         break;
        default:
         printf("Nhap sai cu phap");
         break;
    }
    return 0;
}