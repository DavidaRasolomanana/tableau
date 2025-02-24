/*Algorithme:tableaualafin

variable:
     i,N,M,j:entier;
     A:tableau entier[200];
     B:tableau entier[50];
debut
    faire
        afficher("veuillez entrer le nombre de case que vous voulez dans le tableau A=");
        lire(N);
    tantque(N>200);
    faire
        afficher("veuillez entrer le nombre de case que vous voulez dans le tableau B=");
        lire("%d",&M);
    tantque(N>50);
    pour(i=0;i<N;i++)
        afficher("Tableau A : entrer le nombre dans la case numero =",i);
        lire(A[i]);
    fpour
    pour(i=0;i<M;i++)
        afficher("Tableau B : entrer le nombre dans la case numero =",i);
        lire(B[i]);
    fpour
    pour(i=0;i<N;i++)
        afficher("T(A)[",i,"]=",A[i]);
    fpour
    pour(i=0;i<M;i++)
        afficher("T(B)[",i,"]=",B[i]);
    fpour
    afficher("le tableau A est de dimension =",N);
    afficher("le tableau B est de dimension =",M);
    j=0;
    pour(i=N;i<(N+M);i++)
        A[i]<-B[j];
        j++;
    fpour
    pour(i=0;i<(N+M);i++)
        afficher("A[",i,"]=",A[i]);
fin
}*/
#include<stdio.h>

int main()
{
    int i,N,M,j;
    int A[200];
    int B[50];
    do
    {
        printf("veuillez entrer le nombre de case que vous voulez dans le tableau A=");
        scanf("%d",&N);
    }
    while(N>200);
    do
    {
        printf("veuillez entrer le nombre de case que vous voulez dans le tableau B=");
        scanf("%d",&M);
    }
    while(N>50);
    for(i=0;i<N;i++)
    {
        printf("Tableau A : entrer le nombre dans la case numero %d =",i);
        scanf("%d",&A[i]);
    }
    for(i=0;i<M;i++)
    {
        printf("Tableau B : entrer le nombre dans la case numero %d =",i);
        scanf("%d",&B[i]);
    }
    for(i=0;i<N;i++)
    {
        printf("T(A)[%d]=%d\n",i,A[i]);
    }
    for(i=0;i<M;i++)
    {
        printf("T(B)[%d]=%d\n",i,B[i]);
    }
    printf("le tableau A est de dimension = %d\n",N);
    printf("le tableau B est de dimension = %d\n",M);
    j=0;
    for(i=N;i<(N+M);i++)
    {
        A[i]=B[j];
        j++;
    }
    for(i=0;i<(N+M);i++)
    {
        printf("A[%d]=%d\n",i,A[i]);
    }
    return(0);
}
