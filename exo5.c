/*
algorithme : exo3
variable:
    j,i,n,somme,position,max:entier,i1,i2;
    T:tableau entier [50];
    TPOS:tableau entier[50];
    TNEG:tableau entier[50];
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
afficher ("EXO4\n");
    afficher("tableaux des positifs");
    i1<-0;
    i2<-0;
pour(i=0;i<j;i++)
	
    si(T[i]>0)
    alors
        TPOS[i1]<-T[i];
        i1++;
    fsi
fpour
pour(i=0;i<i1;i++)
    afficher("TPOS[",i"]=",TPOS[i]);
fpour
    afficher("tableaux des negatifs");
	pour(i=0;i<j;i++)
		si(T[i]<0)
		alors
            TNEG[i2]=T[i];
            i2++;
		fsi
	fpour
    pour(i=0;i<i2;i++)
	
        ("TNEG[",i,"]=",TNEG[i]);
	fpour
    afficher("EXO5"); 
    afficher("le tableau a l'inverse");
    x<-j;
    pour(i=0;i<j;i++)
        T[x]<-T[i];
        x<-x-1;
        afficher("apres T[",i,"]=",T[x]);
    fpour
fin
*/
#include<stdio.h>

int main ()
{
    int i,n,somme,max,j,position,pos,neg,i1,i2,x;
    int T[50];
	int TPOS[50];
	int TNEG[50];
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
    printf("tableau sans 0\n");
    for(i=0;i<n;i++)
    {
        if(T[i]!=0)
        {
            T[j]=T[i];
            printf("T[%d]=%d\n",j,T[j]);
            j=j+1;
        }				
    }
    printf("tableaux des positifs\n");
    i1=0;
    i2=0;
	for(i=0;i<j;i++)
	{
		if(T[i]>0)
		{
            TPOS[i1]=T[i];
            i1++;
		}
	}

	for(i=0;i<i1;i++)
	{
		printf("TPOS[%d]=%d\n",i,TPOS[i]);
	}
    printf("tableaux des negatifs\n");
	for(i=0;i<j;i++)
	{
		if(T[i]<0)
		{
            TNEG[i2]=T[i];
            i2++;
		}
	}
    for(i=0;i<i2;i++)
	{
        printf("TNEG[%d]=%d\n",i,TNEG[i]);
	}
    printf("EXO5\n"); 
    printf("le tableau a l'inverse\n");
    x=j;
    for(i=0;i<j;i++)
    {
        T[x]=T[i];
        x=x-1;
        printf("apres T[%d]=%d\n",i,T[x]);
    }
        
    return(0);
}
