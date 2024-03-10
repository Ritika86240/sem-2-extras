#include <stdio.h>
int delete();
int insert();
int search();
int array[100], n,i,c=0;
void main (){
    printf(" enter the no of elements that are there in the array");
    scanf(" %d",&n);

    printf("\n enter the n elements", n);
    for(i=0;i<n;i++)
    {printf(" enter the elements of the array");
    
    scanf(" %d",&array[i]);
    printf("%d",array[i]);
    }
  int ch;
  printf(" enter the number according to ur choice");
  printf(" 1.insert 2. delete 3.search");
  scanf(" %d",&ch);
  switch (ch):
  case 1:
  delete();



}




























