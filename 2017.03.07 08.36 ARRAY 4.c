/*
NAMA   : M. FADLI ZEIN
KELAS  : TK 1 B
NO BP  : 1601081035
NP     : ARRAY 1\
*/

#include <stdio.h>
void main()
{
    int A[100];
    int B[100];
    int i,n,k;
    printf("MASUKAN BNYAK DATA : "); scanf("%d",&n);
    printf("\n");
    for(i=0; i<n; i++)
    {
        printf("A[%d} = ",i+1); scanf("%d",&A[i]);
    }
    for(i=n; i>=0; i--)
    {
        B[n-i]=A[i];
    }
    for(i=0; i<n; i++)
    {
        printf("B[%d} = %d\n",i,B[i]);
    }
}
