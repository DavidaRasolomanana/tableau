/*
algorithme : exo1
variable:
    i,n,somme:entier;
    T:tableau entier [50]
debut:
somme=0;
faire
    i++;
    si(i>3)
    alors
        fin;
    fsi
    afficher("veuillez entrer le nombre de nombre ,nombre inferieur a 50 =");
    lire(n);
tantque(n>50 ou n<1)
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
fin
*/
#include<stdio.h>
#include<stdlib.h>

int main ()

{
    int i,n,somme;
    int T[50];
    somme=0;
    printf("EXO1\n");
    i=0;
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
    while ((n>50) || (n<1) );
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
    return(0);                

}
