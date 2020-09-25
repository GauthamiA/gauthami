#include<stdio.h>
int stack[10],max=5,ch,top=-1,ele,i,j;
void push(int ele)
{
 	
		top=top+1;
		stack[top]=ele;
	
}
int pop()
	{
		int d;
		d=stack[top];
		top=top-1;
		return d;
	}
	
void display()
{
	if(top==-1)
	{
		printf("\n stack is empty");
	}else
	{
		for(i=0;i<=top;i++)
	{
		printf("\n stack[%d]->%d",i,stack[i]);
	}
	}
}
void pal()
{
 	int a[15],n,eq=0;
	printf("\n enter value for n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	top=-1; //code to push
	for(i=0;i<n;i++)
	{
		push(a[i]);
	
	}
//compare pop and push
	for(i=0;i<n;i++)
	{
		if(a[i]!=pop())
	{
		eq=-1;
	}
	}
		if(eq!=-1)
	{
		printf("\n palindrome");
	}
	else
	{
		printf("\n not a palindrome");
	}
}
void main() {
int ele,dele;
	do
	{
		printf("\n enter your choice: ");
		printf("\n.1.PUSH\n 2.POP\n 3.DISPLAY\n 4.PAL\n 5.EXIT\n");
		scanf("%d",&ch);
		switch(ch)
	{
		case 1:if(top==max-1)
	{
		printf("overflow");
	}else
	{
		printf("enter the element: ");
		scanf("%d",&ele);
		push(ele);
		
	}break;
		case 2: if(top==-1) //stack is empty
	{
		printf("\n UNDER FLOW");
	}
	else 
	{
		dele=pop();
		printf("\n the deleted element is %d",dele);
	}
	break;
		case 3:display();
		break;
		case 4:pal();
		break;
	}
	}while(ch!=5);

}
