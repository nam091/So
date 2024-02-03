#include<stdio.h>
#include<stdlib.h>

void daycheck(int month, int year, int *p_dcheck){
    int dcheck;
    switch(month){
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                dcheck = 31;
                break;
            case 4: case 6: case 9: case 11: 
                dcheck = 30;
                break;
            case 2:
                if(year % 4 == 0 || year % 400 == 0 && year % 100 != 0)
                    dcheck = 29;
                else 
                    dcheck = 28;
                break;
            default:
                printf("Nhap lai thang\n");
                break;
    }
    *p_dcheck = dcheck;
}

void nextmonth(int month, int year, int *next_month,int *next_year){
    *next_month = (month == 12) ? 1 : month + 1;
    *next_year = (month == 12) ? year + 1 : year;
}

void lastmonth(int month, int year,int *last_month,int *last_year){
    last_month = (month == 1) ? 12 : month - 1;
    last_year = (month == 1) ? year - 1 : year;
}
void final(int day ,int month, int year, int dcheck){
    int torm, yest;
    daycheck(month, year, &dcheck);
    lastmonth(month, year,&last_month, &last_year);
    nextmonth(month, year,&next_month, &next_year);
    if(day == dcheck){
            yest = day - 1;
            torm = 1;
            nextmonth(month, year, &next_month, &next_year);
            lastmonth(month, year, &month, &year);
            printf("%d / %d / %d\n", yest, month, year);
            printf("%d / %d / %d", torm, next_month, next_year);
        }else if(day == 1){
            daycheck(last_month, last_year, &yest);
            torm = day + 1;
            lastmonth(month, year, &last_month, &last_year);
            nextmonth(month, year, &month, &year);
            printf("%d / %d / %d\n", yest, last_month, last_year);
            printf("%d / %d / %d", torm, month, year);
}
}

int main(){
    int day, month, year, yest, torm, dcheck, last_month, last_year, next_month, next_year;
    scanf("%d %d %d", &day, &month, &year);
    if(month == 2){
        final(day, month, year);
    }else {
        final(day, month, year);
    }
    return 0;
}
