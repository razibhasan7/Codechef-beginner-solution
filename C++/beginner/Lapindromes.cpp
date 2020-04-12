/***************************
Programmer: Aanisha Mishra
Split the string into two halves, ignore the middle letter if the length of the
string is odd. Create two arrays each of 26 elements for recording characters in
each of the two split strings. Compare the arrays to check if the original string
is lapindrome.
***************************/
#include<bits/stdc++.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[1001];
        int a[26]={0},b[26]={0},l,i=0,j,flag=0;
        scanf("%s",s);
        l=strlen(s);
        if(l%2==0)
            j=l/2;
        else
            j=(l/2)+1;
        while(i<(l/2))
        {
            a[s[i]-97]++;
            i++;
        }
        while(s[j]!='\0')
        {
            b[s[j]-97]++;
            j++;
        };
        i=0;
        while(i<25)
        {
            if(a[i]==b[i]) {}
            else
            {
                flag=1;
                break;
            }
            i++;
        }
        if(flag==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
