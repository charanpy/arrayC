#include <stdio.h>
#define MAX 10

int a,array[MAX],size,i,pos,insertElement,searchElement;

//create
void createArray(){
  printf("Enter size of Array: ");
  scanf("%d",&size);

  for(i=0;i<size;i++){
    printf("\nEnter the Element%d ",i+1);
    scanf("%d",&array[i]);
  }
}

//display
void displayArray(){
  printf("The Elements of list \n");
  for(i=0;i<size;i++){
    printf("%d \t",array[i]);

  }
  
}

//insert
int insertElementToArray(){
  printf("\nEnter the position of element to insert");
  scanf("%d",&pos);
  if(pos >= size){
    return 0;

  }
  for(i=MAX-1;i >= pos-1;i--){
    array[i+1]=array[i];
  }
  printf("\nEnter element to insert");
  scanf("%d",&insertElement);
  array[pos]=insertElement;
  size++;
  
}

//SearchElement
int searchElem(){
  printf("\nEnter element to search");
  scanf("%d",&searchElement);
  for(i=0;i<size;i++){
    if(array[i] == searchElement){
      return i;
    }
    
  }
  return 0;
}

//Delete

void deletion()
{
    printf("\n Enter the position u want to delete:");
    scanf("%d", &pos);
    if(pos>=size)
    {
        printf("\n Invalid Location::");
    }
    else
    {
       for(i=pos-1;i<size;i++)
       {
          array[i]=array[i+1];
        }
    size--;
    }
}

int main(){
  printf("Hello world\n");

  int ch,searchRes,insertSuccess;
char g='y';

do
{

   printf("\n 1.Create \n 2.Delete \n 3.Search \n 4.Insert \n 5.Display\n");
   printf("\n Enter your Choice");
   scanf("%d", &ch);
   switch(ch)
  {
           case 1:
createArray();
break;

case 2:
deletion();
  displayArray();


break;

case 3:
  searchRes=searchElem();
  if(searchRes == 0){
    printf("OOPs Not found :(");
  }
  else{
    printf("Element is present at Position: %d",searchRes+1);
  }

break;

case 4:
insertSuccess=insertElementToArray();
  if(insertSuccess == 0){
    printf("\nOOPS Invalid position");
  }
break;

case 5:
displayArray();
break;


default:
printf("\n Enter the correct choice:");
}
printf("\n Do u want to continue:::");
scanf("\n%c", &g);
}
while(g=='y'||g=='Y');



  return 0;
}
