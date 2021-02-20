#include<stdio.h>
#include<string.h>

void function(char *ptr){
int i,j;

printf("Name is %s\n",ptr);

//printf("reverse of the name is\n");

int len= strlen(ptr);

printf("len of name is %d\n",len);
printf("Reverse of the name is \n");

for(j=len-1;j>=0;j--){

printf("%c",*(ptr+j));

}
printf("\n");
//add to capitalize each letter

printf("print name in capital letters\n");

for(j=0;j<len;j++){

printf("%c",ptr[j]-32);

}
//

printf("\n");
}//function


//string compare function
void my_strcmp(char *p1,char *p2){

printf("two strings are %s %s\n",p1,p2);

if(strcmp(p1,p2)!=0)
	printf("strigs are not same");
else
	printf("strigs are same\n");

}
void cmp(int a, int b){

if(a==b)
	printf("number are same\n");
else
	printf("number are not same\n");

}
void add(int a, int b){

printf("sum of 2 numbers is \n",a+b);


}

//main function

void main(){

char name[20];
int a,b;
char str1[20],str2[20];
char str1[20],str2[20];
int a,b;
printf("Enter a name\n");

scanf("%s",name);

function(name);

printf("Enter two strings\n ");
scanf("%s %s",str1,str2);
my_strcmp(str1,str2);

printf("enter two numbers\n");
scanf("%d %d\n",&a,&b);
cmp(a,b);
printf("Enter 2 numbers\n");
scanf("%d %d",&a,&b);

printf("\n");
}
