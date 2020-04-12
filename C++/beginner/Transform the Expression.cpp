/***************************
Programmer: Aanisha Mishra
Concept of stack is used here to resolve the brackets
Near implementation of postfix expression
***************************/
#include<cstdio>
#include<ctype.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[410],a[410],si[410];
        scanf("%s",s);
        int i=0,j=0,k=0;
        while(s[i]!='\0')
        {
            if(s[i]=='(')
            {
                si[j]=s[i];
                j++;
            }
            else if(s[i]==')')
            {
                j--;
                while(si[j]!='(')
                {
                    a[k]=si[j];
                    k++;
                    j--;
                }
            }
            else if(isalpha(s[i]))
            {
                a[k]=s[i];
                k++;
            }
            else
            {
                si[j]=s[i];
                j++;
            }
            i++;
        }
        i=0;
        while(i<k)
        {
            printf("%c",a[i]);
            i++;
        }
        printf("\n");
    }
    return 0;
}
