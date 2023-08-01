#include<stdio.h>
#include<conio.h>
#define max 7
int arr[max];
void inst()
{
    int i;
    for(i=0;i<max;i++)
    arr[i]=-1;
}

void insert_linear()
{
    int key,hkey,i,c;
    printf("\nEnter the key value to be inserted\n");
    scanf("%d",&key);
    hkey=key%max;
    for(i=0;i<max;i++)
    {
        c=(hkey+i)%max;
        if(arr[c]==-1)
        {
            arr[c]=key;
            break;
        }
    }
    if(i==max)
    printf("\nTable full");
}

void insert_quad()
{
    int key,hkey,i,c;
    printf("\nEnter the key value to be inserted\n");
    scanf("%d",&key);
    hkey=key%max;
    for(i=0;i<max;i++)
    {
        c=(hkey+i*i)%max;
        if(arr[c]==-1)
        {
            arr[c]=key;
            break;
        }
    }
    if(i==max)
    printf("\nTable is full");
}

void display()
{
    int i;
    for(i=0;i<max;i++)
    {
        printf("\nValue at index %d is %d",i,arr[i]);
    }
}

int main()
{
    int ch,a;
    printf("\nEnter choice 1-Linear probing 2-Quadratic Probing:  ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        inst();
        while(1){
        printf("\n Enter choice 1-Insert 2-Display 3-Exit:  ");
        scanf("%d",&a);
        switch(a)
        {
            case 1:
            insert_linear();
            break;
            case 2:
            display();
            break;
            case 3:
            exit(0);
            break;
            default:
            printf("\n Wrong choice");
        }
        }
        break;

        case 2:
        inst();
         while(1){
        printf("\n Enter choice 1-Insert 2-Display 3-Exit:  ");
        scanf("%d",&a);
        switch(a)
        {
            case 1:
            insert_quad();
            break;
            case 2:
            display();
            break;
            case 3:
            exit(0);
            break;
            default:
            printf("\n Wrong choice");
        }
        }
        break;

        default:
        printf("\nWrong Choice");
    }
}