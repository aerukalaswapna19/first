#include<stdio.h>
#include<stdlib.h>
int full=0,empty=3,x=0;
void main()
{
int n;
void procedure();
void consumer();
int wait(int);
int signal(int);
printf("\n1.procedure\n2.consumer\n3.exit");
while(1)
{
printf("enter your choice");
scanf("%d",&n);
choice(n)
{
case 1:if(empty !=0)
producer;
else
printf("Buffer is full");
break;
case 2:if(full !=0)
cunsumer;
else
printf("buffer is empty");
break;
}
}
}
int wait(s)
{
return(--s);
}
int signal(s)
{
return(++s);
}
void producer()
full=signal(full);
empty=wait(empty);
x++;
printf("producer produces the item %d",x);
}
void consumer()
{
