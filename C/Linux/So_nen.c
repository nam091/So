#include<stdio.h>
#include<stdlib.h>

int Comp(int n, int sum) {
    if(n < 9){
        sum += n;
        if(sum < 9)
            return sum;
        else{
            n = sum;
            return Comp(n/10, (n % 10)+sum);
        } 
    }else
            return Comp(n/10, (n%10)+sum);

}


int main(){
    int T;
    int long long n;
    scanf("%d", &T);
    int* str = (int*) malloc(T * sizeof(int));
    for(int i = 0; i < T; i++){
        scanf("%lld", &n);
        str[i] = Comp(n, 0);
    }
    for(int i = 0; i < T; i++){
        printf("\n#%d %d\n", i+1, str[i]);
    }
    free(str);
    return 0;
}