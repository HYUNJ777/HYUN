#include<stdio.h>
int main(){
    int a,b;
    scanf("%d  %d",&a,&b);
    // 조건? 참실행:거짓실행;
    a>b?printf("%d",a):printf("%d",b);
    a==b?printf("a==b"):printf("a!==b");
    return 0;
}