/*#include<stdio.h>
int main()
{
    int a, b, c;
    printf("enter the value:\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("result: %d\n",c);
}*/

/*#include<stdio.h>
int main()
{
    int a;
    printf("enter the number:\n");
    scanf("%d",&a);
    if(a>0){
    printf("this number is positve");
    }
    else if (a<0)
    {
    printf("this number is negetive");
    }
    else
    {
        printf("this number is 0");
    }
}*/

// write a program to factorial number
/*#include<stdio.h>
int main()
{
    int i,n,f=1;
    printf("enter the number:\n");
    scanf("%d",&n);
{
    for(i=1;i<=n;i++)
    f=f*i;
}
printf("this number is %d",f);
}*/

// Write a Programme to display the 1d array

/*#include<stdio.h>
int main()
{
    int i,a[5]={10,20,30,40,50};
    for(i=0;i<=3;i++)
    {
        printf("%d\t",a[i]);
    }
}*/

/*#include<stdio.h>
#define MAX 10
void push();
void pop();
void display();
int stack[MAX];
int top=-1; //intialize top to -1 for an empty stack
int main()
{
    int choice=1; //INTIALIZE choise to enter the top
    while (choice)
    {
        printf("\n1:push\n2:pop\n3:taverse\n4:display\no exit");
        printf("\nEnter your Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            push();
            break;
         case 2:
            pop();
            break;
        case 3:
            display();
            break;
        }

    }
    return 0;

}
//Push operation:

void push()
{
    int item;
    if(top==MAX)
    {
        printf("Stack overflow");
    }
    else
    {
        printf("enter the item:\n");
        scanf("%d", &item);
        top=top+1;
        stack[top]=item;
    }
}
//pop opeartion
void pop()
{
    if(top==-1)
    {
        printf("stack underflow\n");
    }
    else
    {
        int item=stack[top];
        top--;//decrement top after accessing the stack
        printf("%d popped from stack\n", item);
    }

}

//display
void display()
{
    int i;
    if ("top==1")
    {
        printf("stack is empty");
    }
    else
    {
        printf("stack elements are:");
        for (i = 0; i <=top; i++)
        {
           printf("%d",stack[i]);
        }
        printf("\n");

    }

}*/



// Marge SORT:-

  #include <stdio.h>
int main()
{
    int arr[] = {1, 2, 10, 8, 5};
    int temp[5];
    int left = 0, right = 4;
    int mid = (left + right) / 2;
    int i, j, k;
    if (arr[0] > arr[1])
    {
        int temp_val = arr[0];
        arr[0] = arr[1];
        arr[1] = temp_val;
    }
    if (arr[2] > arr[3])
    {
        int temp_val = arr[3];
        arr[3] = arr[4];
        arr[4] = temp_val;
    }
    i = left;
    j = mid + 1;
    k = 0;
    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }
    while (i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }
    while (j <= right)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }
    for (i = 0; i < 5; i++)
    {
        arr[i] = temp[i];
    }
    printf("sorted array: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
} 

 //Bubble Sort

 /*#include<stdio.h>
 int main()
 {
    int arr[]={1,5,9,7,3};
    int n=5;
    int i,j,temp;
    for ( i = 0; i < n-1; i++)
    {
        for ( j = 0; j < n-i-1; j++)
        {
        if (arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
        
        }
        
    }
    printf("sorted array: ");
    for ( i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}*/

// struct node
// {
//     int data;
// };struct node*next;