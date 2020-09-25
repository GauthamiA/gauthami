#include<stdio.h>
//we need variable like arr[],number of elements n,looping i,j,for position pos,for new element elem,for choice ch
//global declaration
int arr[15],i,j,ch,pos,elem,n,temp,key;
void create_a()
{
	printf("\n enter the number of element: ");
	scanf("%d",&n);
	printf("\n enter the elements one by one :");
	for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
}
void display_a()
{
	printf("\n entered array elements are : ");
	for(i=0;i<n;i++)
	{
		printf("\n arr[%d]->%d",i,arr[i]);
	}

}
void insert_a() {
	 printf("Enter the position");
	 scanf("%d",&pos);
	 printf("\n enter the new element:");
	 scanf("%d",&elem);

	if (pos>n || pos<0) {
	 printf("\n you have entered invalid position");
	}
	else {
	  for(i=n-1;i>=pos;i--)
	{
	   arr[i+1]=arr[i];

	}
	 arr[pos]=elem;//storing new array
	}
	n=n+1;//to update n value because array increased
	}
void delete_a() {
printf("\n enter the position : ");
scanf("%d",&pos);
if(pos<0 || pos>n) {
 printf("\n invalid");
}
else {
 for(i=pos+1;i<n;i++) {
 arr[i-1]=arr[i];
}n=n-1;
}

}
void sort_a()
{
	  for(i=0;i<n-1;i++)
	{
		 for(j=0;j<n-(i+1);j++)
		   if(arr[j]>arr[j+1])
		{
			 temp=arr[j];
			 arr[j]=arr[j+1];
			 arr[j+1]=temp;
		}

	}
}
void search_a()
{
  	printf("Enter key element");
	scanf("%d",&key);
 	for(i=0;i<n;i++)
	{
		if(key==arr[i])
		{
			printf("Key is found");
			return;
		}
	}
		printf("Key is not found");
}
void main() {
  do{
	printf("\nEnter your choice: ");
	printf("\n 1. Creating array\n 2. Display \n 3. Inserting new element to array \n 4.Deleting an element from array\n 5.Bubble sort\n 7.Search\n6.Exit\n ");
	scanf("%d",&ch);
	switch(ch)
  	{
		case 1:create_a();//function call
		break;
		 case 2: display_a();
 		break;
    		case 3: insert_a();
		break;
    		case 4: delete_a();
		break;
		case 5: sort_a();
		break;


	}
    }while(ch!=6);
}
