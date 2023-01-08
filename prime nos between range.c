#include<stdio.h>
int isprime(int n);
int main(){
    int n1,n2;
    printf("Enter number 1:\n");
    scanf("%d",&n1);
    printf("Enter number 2:\n");
    scanf("%d",&n2);
    printf("The prime nos present between %d and %d are:\n",n1,n2);
    for(int i=n1;i<=n2;i++)
    {
        if(isprime(i)){
            printf("%d\n",i);
        }
    }
    return 0;
}
int isprime(int n){
    for(int i=2;i*i<=n;i++)
    {
        if(n%2==0){
            return 0;
        }else{
        return 1;
        }
    }
}