/*
algorithme : exo8
variable:
    i,n,positionmin,positionmax,max,min:entier;
    A:tableau entier [50]
debut:
faire
    i++;
    si(i>3)
    alors
        fin;
    fsi
    afficher("veuillez entrer le nombre de nombre ,nombre inferieur a 50 =");
    lire(n);
tantque(n>50 ou n<1);
pour(i=0;i<n;i++)
    afficher("veuillez entrer le nombre numero",i,"=");
    lire(A[i]);
fpour

pour(i=0;i<n;i++)
    afficher("A[",i,"]=",T[i]);
fpour
max<-A[0]
pour(i=0;i<n;i++)
    si(A[i]>max)
    alors
        max<-A[i];
        positionmax<-i;
    fsi
fpour
min<-A[0];
pour(i=0;i<n;i++)
    si(A[i]<min)
    alors
        min<-T[i];
        positionmin<-i;
    fsi
fpour
afficher("le maximum est A[",positionmax,"]=",max);
afficher("le minimum est A[",positionmin,"]=",min);
fin
*/
#include<stdio.h>
#include<stdlib.h>

int main ()

{
    int i,n,max,positionmin,positionmax,min;
    int A[50];
    do
    {
        i++;
        if(i>3)
        {
            exit(0);
        }
        printf("veuillez entrer le nombre de nombre ,nombre inferieur a 50 =");
        scanf("%d",&n);
    }
    while (n>50 || n<1);
    for(i=0;i<n;i++)
    {
        printf("veuillez entrer le nombre numero %d=",i);
        scanf("%d",&A[i]);
    }
    for (i=0;i<n;i++)
    {   
        printf("A[%d]=%d\n",i,A[i]);
    }
    max=A[0];
    for(i=1;i<n;i++)
    {
        if(A[i]>max)
        {
            max=A[i];
            positionmax=i;
        }
    }
    min=A[0];
    for(i=1;i<n;i++)
    {
        if(A[i]<min)
        {
            min=A[i];
            positionmin=i;
        }
    }
    printf("le maximum est A[%d]=%d\n",positionmax,max);
    printf("le minimum est A[%d]=%d\n",positionmin,min);
    return(0);

}
