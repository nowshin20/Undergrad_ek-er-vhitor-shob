#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char a[10];
    char b[10];
    char c[10];
    int p=0,r=0,i=0;
    int t=0;
    int x,g,s,n,o;
//clrscr();

    puts("Enter String:");
    gets(a);
    puts("Enter Substring:");
    gets(b);
    printf("Enter the position:");
    scanf("%d",&p);
    r = strlen(a);
    n = strlen(b);
    i=0;

// Copying the input string into another array
    while(i <= r)
    {
        c[i]=a[i];
        i++;
    }
    s = n+r;
    o = p+n;

// Adding the sub-string
    for(i=p; i<s; i++)
    {
        x = c[i];
        if(t<n)
        {
            a[i] = b[t];
            t=t+1;
        }
        a[o]=x;
        o=o+1;
    }

    printf("%s", a);
    return 0;
    getch();
}