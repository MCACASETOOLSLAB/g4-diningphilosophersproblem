#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int wait(int);
int signal(int);
main()
{
    int spoon[10],a[10]={0},i,size,ch;
    printf("\nenter the how many phlospers");
    scanf("%d",&size);
    for(i=1;i<=size;i++)
        spoon[i]=1;
    
    while(1)
    {
     
     for(i=1;i<=size;i++)
     {
           if(a[i]==1)
           printf("\n NOW philospher %d is eating",i);
       }
           printf("\n1:EAT \n2:THINK\n3:exit");
     printf("\n enter ur choice");
     scanf("%d",&ch);
     switch(ch)
       {
        case 1 : printf("\n enter philosopher number to eat");
                    scanf("%d",&i);           
                 if(a[i]==1)
               {
                  printf("\n he is already eating");
                  break;
               }  
               if((spoon[i]==1)&&(spoon[(i+1)%size]==1))
                   {
                   a[i]=1;
                   spoon[i]=wait(spoon[i]);
                   spoon[(i+1)%size]=wait(spoon[(i+1)%size]);
                   }
               else
                   printf("\n\n not possible");
                break;
       
        case 2: printf("\n enter philosopher number to think");
                    scanf("%d",&i);
                    if(a[i]==1)
                    {
                    a[i]=0;
                    spoon[i]=signal(spoon[i]);
                    spoon[(i+1)%size]=signal(spoon[(i+1)%size]);
                    }
                 else
                    printf("\n philosopher %d is alrady thinking",i);
                                 
               break;           
        case 3:exit(0);
       }
           
    }
} 
    
    int wait(int s)
    {
    if(s<=0);
     s--;
     return s;
     }
     int signal(int s)
     {
     s++;
     return s;
     }
    
