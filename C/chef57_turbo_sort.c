//turbo sort
#include<stdio.h>
void merge(int A[],int p,int q,int r){
int i,j,k,n1,n2;
n1=q-p+1;
n2=r-q;
int L[n1+1],R[n2+1];//taking two arrays for left and right part of the mid point
for(i=0;i<n1;i++)
L[i]=A[p+i];
for(i=0;i<n2;i++)
R[i]=A[q+1+i];
L[n1]=2147483647;
R[n2]=2147483647;//assuming all the values in the will be less than the max value
i=0;j=0;
for(k=p;k<=r;k++){// important to take k<=r here because we are using r as 1 less than total number of elements in array
    if(L[i]<=R[j]){
    A[k]=L[i];
    i++;
    }
    else{
    A[k]=R[j];
    j++;
    }
}



}
void merge_sort(int A[],int p,int r){
int q;
if(p<r){
//q is the mid point but we wont use the below line of code
//q=(p+r)/2; // it can overflow
q=p+(r-p)/2; // this will never ovweflow
merge_sort(A,p,q);
merge_sort(A,q+1,r);
merge(A,p,q,r);
}
}
void print(int A[],int p,int r){
int i;
for(i=p;i<=r;i++)
printf("%d\n",A[i]);
}
int main(){

int n,A[1000001]={0},i,p,r,k=100; //p is the first index of array // r is the last index of the array
p=0;
//array input
scanf("%d",&n);
r=n-1;
for(i=p;i<=r;i++){
scanf("%d",&A[i]);

}

merge_sort(A,p,r);
print(A,p,r);
return 0;
}
