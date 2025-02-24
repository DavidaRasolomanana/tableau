/* Algorithme:produitscalaire

variable:

     n,i:entier;
     scal:reel;
    u: tableau reel [100];
    v: tableau reel [100];
    debut

        scal<-0;
        afficher("inserer la dimension des vecteurs que vous voulez");
        lire(n);
        afficher("veuillez inserer les elements du vecteur u");
        pour(i=0;i<n;i++)
            lire(u[i]);
        fpour
        afficher("veuillez inserer les elements du vecteur v");
        pour(i=0;i<n;i++)
            lire(v[i]);
        fpour
        pout(i=0;i<n;i++)
            scal<-scal +(u[i])*(v[i]);
        fpour
        afficher("le produit scalaire des deux vecteurs u et v est ",scal);

    fin
}*/
#include<stdio.h>

int main()
{
    int n,i;
    float scal;
    float u[100],v[100];
    scal=0;
    printf("inserer la dimension des vecteurs que vous voulez");
    scanf("%d",&n);
    printf("veuillez inserer les elements du vecteur u\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&u[i]);
    }
    printf("veuillez inserer les elements du vecteur v\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&v[i]);
    }
    for(i=0;i<n;i++)
    {
        scal= scal +(u[i])*(v[i]);
    }
    printf("le produit scalaire des deux vecteurs u et v est %.2f\n",scal);

    return(0);
}