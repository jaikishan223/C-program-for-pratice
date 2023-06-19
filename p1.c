#include <stdio.h>
int main(){
int num;
printf("type a number of your choice\n");
scanf("%d",&num);
printf("The multiplication table of %d is \n",num);
for (int i = 1; i <=10 ; i++)
{
    printf("%d X %d = %d\n ",i,num,i*num);
}
return 0;
}