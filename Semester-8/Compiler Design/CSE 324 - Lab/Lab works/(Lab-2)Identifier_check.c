#include<stdio.h>
#include<conio.h>
#include<string.h>

/*
Given identifiers:
NUM        valid
Value_2    valid
5digit     invalid
NUM$       invalid
int        invalid
*/

//if(str[0] == '_' && n==1) invalid
int main()
{

char string[10];
int count=0,flag;
printf("Enter string: ");
gets(string);
if( (string[0]>='a'&&string[0]<='z')||(string[0]>='A'&&string[0]<='Z')||(string[0]=='_'))
{
    for(int i=1;i<=strlen(string);i++)
    {
        if((string[i]>='a'&& string[i]<='z')||(string[i]>='A' && string[i]<='Z')||(string[i]>='0'&& string[i]<='9')||(string[i]=='-'))
    {
    count++;
    }
       }
    if(count==strlen(string))
    {
      flag=0;
    }
}
else
{
     flag=1;
}
if(flag==1)
    printf("%s is not valid identifier",string);
else
    printf("%s is valid identifier",string);
return 0;
}
