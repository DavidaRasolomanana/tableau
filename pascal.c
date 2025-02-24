/*algorithme:triangledepascal

Variable:
    x,i,j,n:entier;
    tab:tableau entier[100][100];
debut
    faire
        x++;
        si(x>3)
        alors
            fin;
        fsi
        afficher("entrer la hauteur du triangle de pascal inferieur a 100 =");
        lire(n);
    tantque(n>100);
    pour(i=1;i<=n;i++)
        pour(j=1;j<=i;j++)
            tab[i][j]<-1;
            si(i>1)
            alors
                tab[i][j]=(tab[i-1][j-1])+(tab[i-1][j]);
            fsi
            afficher("%d ",tab[i][j]);
        fpour
    fpour
fin
}*/
#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int x,i,j,n;
    int tab[100][100];
    do
    {
        x++;
        if(x>3)
        {
            exit(0);
        }
        printf("entrer la hauteur du triangle de pascal inferieur a 100 =");
        scanf("%d",&n);
    }
    while(n>100);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            tab[i][j]=1;
            if(i>1)
            {
                tab[i][j]=(tab[i-1][j-1])+(tab[i-1][j]);
            }
            printf("%d ",tab[i][j]);
        }
        printf("\n");
    }
    return(0);
}