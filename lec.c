#include <stdio.h>
void f(int n1,int n2,int *sum,int *prod,int *avg){
    *sum = n1 + n2;
    *prod = n1 * n2;
    *avg = (n1 + n2) / 2;
}
int main (){
    int n1,n2,sum=0,prod=0 ,avg=0;

    printf("enter a no:");
    scanf("%d",&n1);
     printf("enter another no:");
    scanf("%d",&n2);

    f(n1,n2,&sum,&prod,&avg);

    printf("sum=%d\n",sum);
    printf("prod=%d\n",prod);
    printf("avg=%d\n",avg);

    return 0;
}