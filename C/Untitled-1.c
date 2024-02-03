#include <stdio.h>

int main(){
    int month,year,nhuan;
    scanf("%d%d",&month,&year);
    if(year%400==0)
        if(year%40==0)
            if(year%4==0)
                nhuan=1;
    switch (month)
    {
        case 1 : case 3: case 5: case 7: case 8: case 10: case 12:
        printf("31");
        break;
        case 2:
        if(month==2)
            if(nhuan==1) printf("29");
            else printf("28");
        break; 
        case 6: case 9: case 11: case 4:
        printf("30");
        break;
    }
    return 0;
}

