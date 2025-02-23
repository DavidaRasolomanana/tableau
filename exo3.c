/*
algorithme : exo2
variable:
    j,i,n,somme,position,max:entier;
    T:tableau entier [50]
debut:
somme<-0;
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
    lire(T[i]);
fpour

pour(i=0;i<n;i++)
    afficher("T[",i,"]=",T[i]);
fpour

pour(i=0;i<n;i++)
    somme<-somme+T[i];
fpour
afficher("la somme des elements du tableau est ",somme);
afficher("EXO2");
pour(i=0;i<n;i++)
    si(T[i]>max)
    alors
        max<-T[i];
        position<-i;
    fsi
fpour
afficher("le maximum est T[",position,"]=",max);
afficher("EXO3");
pour(i=0;i<n;i++)
    si(T[i]<>0)
    alors
        T[j]<-T[i];
        afficher("T[",j,"]=",T[j])
        j<-j+1
    fsi
fpour
fin
*/
#include<stdio.h>

int main ()
{
    int i,n,somme,max,j,position;
    int T[50];
    somme=0;
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
        scanf("%d",&T[i]);
    }
    for (i=0;i<n;i++)
    {   
        printf("T[%d]=%d\n",i,T[i]);
    }
    for(i=0;i<n;i++)
    {
        somme=somme+T[i];                
    }
    printf("la somme des elements du tableau est %d \n",somme);			
    max=T[0];
    for(i=1;i<n;i++)
    {
        if(T[i]>max)
        {
            max=T[i];
            position=i;
        }
    }
    printf("le maximum est dans T[%d]=%d\n",position,max);
    printf("EXO3\n");	
    for(i=0;i<n;i++)
    {
        if(T[i]!=0)
        {
            T[j]=T[i];
            printf("T[%d]=%d\n",j,T[j]);
            j=j+1;
        }						
    }
    return(0);
}
