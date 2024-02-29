#include<stdio.h>

int main (){
    int x,n;
    printf("input the ammount of the even numbers : ");
    scanf("%d",&n);
    printf("the first %d even numbers : \n",n);
        for (x=1;x<=n*2;x=x+2){
            printf("%d\n",x);
        }
    return 0;
}
