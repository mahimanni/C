#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

struct stack{
  int no;
  struct stack *next;
} *top2 = NULL;
typedef struct stack st;

struct node{
  int data;
  struct node* link;
}*top3=NULL;

int isEmpty1(){
  if (top3==NULL)
      return 1;
  else
      return 0;
}

void push3(int data){
  struct node* newNode;
  newNode=malloc(sizeof(newNode));
  if (newNode==NULL){
    printf("Stack Overflow");
    exit(1);
  }
  newNode->data=data;
  newNode->link=NULL;
  newNode->link=top3;
  top3=newNode;
}

void print(){
  struct node* temp;
  temp=top3;
  if (isEmpty1()){
    printf("Stack Underflow");
    exit(1);
  }
  printf("Stack element are:");
  while(temp){
    printf("%d",temp->data);
    temp=temp->link;
} printf("\n");}

#define MAX 5

int top4 = -1, front = 0;
int stack[MAX];
void push2(char a)
{
      top4++;
      stack[top4]  =  a;
}
void pop2()
{
      top4--;
}
int top1=-1;
int item;
char stack_string[MAX];
void pushChar(char item);
char popChar(void);
int isEmpty(void);
int isFull(void);
void pushd();
int popd();
void displayd();
void push();
int pop();
void display();
int reverse();
int stack[5];
int top;
int palindrome();
int palindromed();

int main()
{
  int ch1,ch2,ch3;
  clrscr();
  do{
    printf("Menu");
    printf("\n1:Static Implementation");
    printf("\n2:Dynamic Implementation");
    printf("\n3:Applications");
    printf("\n4:EXIT");
    printf("\nEnter your choice");
    scanf("%d",&ch1);
    switch(ch1){
      case 1: printf("\nMenu");
	      printf("\n1: Push\t2:Pop\t3:Display\t4:Exit");
	      printf("\nEnter your choice:");
	      scanf("%d",&ch2);
	      switch(ch2){
		case 1: push(); break;
		case 2: printf("deleted element is:%d",pop()); break;
		case 3: display(); break;
		case 4: exit(0);
	      } break;
       case 2: printf("\nMenu");
	       printf("\n1: Push\t2:Pop\t3:Display\t4:Exit");
	       printf("\nEnter your choice:");
	       scanf("%d",&ch2);
	       switch(ch2){
		 case 1: pushd(); break;
		 case 2: printf("Deleted element:%d", popd()); break;
		 case 3: displayd(); break;
		 case 4: exit(0);
		} break;
	case 3: printf("\nMenu");
		printf("\n1:Reverse");
		printf("\n2:palindrome ");
		printf("\n3:Exit");
		printf("Enter your choice:");
		scanf("%d",&ch2);
		switch(ch2){
		  case 1:printf("\n1:Statically");
			 printf("\n2:Dynamically");
			 printf("\n3:Exit");
			 printf("\nEnter choice");
			 scanf("%d",&ch3);
			 switch(ch3){
			   case 1: reverse(); break;
			   case 2: push3(1); push3(2); push3(3); print(); break;
			   case 3: exit(0);
			 } break;
		   case 2:printf("\n1:Statically");
			  printf("\n2:Dynamically");
			  printf("\n3:Exit");
			  printf("\nEnter your choice");
			  scanf("%d",&ch3);
			  switch(ch3){
			    case 1: palindrome(); break;
			    case 2: palindromed(); break;
			    case 3: exit(0);
			  } break;
		}
	 case 4: exit(0);
    }
  }while(ch1!=4);
}

void push()
{
  int item;
  if(top1 == 4){
    printf("\n The Stack is FULL.");
  }
  else{
    printf("Enter the element to be inserted");
    scanf("%d",&item);
    top1=top1+1;
    stack[top]=item;
  }
}

int pop()
{
  int item;
  if (top1==-1){
    printf("The stack is EMPTY");
  }
  else{
    item=stack[top1];
    top1=top1-1;
  }
  return(item);
}

void display()
{
  int i;
  if(top1 == -1)
      printf("The stack is Empty");
  else
  {
    for(i=top1; i >= 0; i--)
    {
      printf("\nelement is %d\n",stack[i]);
    }
  }
}

void pushd(){
  st *p;
  p=(st*)malloc(sizeof(st));
  printf("\n Enter the number:");
  scanf("%d",&p->no);
  p->next=top2;
  top2=p;
}

int popd()
{
  st *p;
  if(top2==NULL){
    printf("Stack is already empty");
  }
  else{
    top2=top2->next;
    return(p->no);
    free(p);
  }
}

void displayd()
{
  st *p;
  p=top2;
  while(p!=NULL)
  {
    printf("\nno=%d",p->no);
    p=p->next;
  }
  printf("\nno=%d",p->no);
}

int reverse(){
  char str[20];
  int i;
  printf("Input a string");
  scanf("%s",str);
  for(i=0;i<strlen(str);i++)
  {
    pushChar(str[i]);}
  for(i=0;i<strlen(str);i++)
    str[i]=popChar();
  printf("Reversed String is: %s\n",str);}

void pushChar(char item)
{
    top=top+1;
    stack_string[top]=item;
}
 char popChar()
{
    if(isEmpty())
    {
	printf("\nStack is EMPTY!!!\n");
	return 0;
    }
    item = stack_string[top];
    top=top-1;
    return item;
}

int isEmpty()
{
    if(top==-1)
	return 1;
    else
	return 0;
}

int isFull()
{
    if(top==MAX-1)
	return 1;
    else
	return 0;
}

int palindrome(){
  int i, cho;
  char s[20], b;
  printf("\nEnter String:");
  scanf("%s",&s);
  for (i = 0;s[i] != '\0';i++){
    b = s[i];
    push2(b);
  }
  for (i = 0;i < (strlen(s)/2);i++)
  {
   if (stack[top] == stack[front]){
      pop2();
      front++;
  }
   else
   {
     printf("'%s' is not palindrome.\n\n", s);
     }
   }
   if ((strlen(s) / 2)==  front)
	printf("'%s' is palindrome.\n\n", s);
  front  =  0;
  top  =  -1;
}

int palindromed()
{
 char *str = (char *)malloc(50), *str_san;
    int i = 0, k = 0, len;
    printf("Enter a message: \n");
    scanf("%s", str);
    str_san = (char*)malloc(strlen(str) + 1);
    while (str[i] != '\0') {
	if (str[i] >= 'A' && str[i] <= 'Z') {
	    str_san[k] = str[i] + 32;
	    k++;
	}

	if (str[i] >= 'a' && str[i] <= 'z') {
	    str_san[k] = str[i];
	    k++;
	}

	i++;
    }
    free(str);
    str_san[k] = '\0';
    len = strlen(str_san);

    for (i = 0; i < len; i++) {
	if (str_san[i] != str_san[len - i - 1]) {
	    printf("Not a palindrome");
	    return 0;
	}
    }
    free(str_san);
    printf("Palindrome"); }