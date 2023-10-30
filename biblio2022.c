#include<stdio.h>
#include<conio.h>
#include <windows.h>


void Color(int couleurDuTexte,int couleurDeFond);



typedef struct{ //Structure pour les livres 
	int ref;
	char titre[10];
	int statu;
}livres;
typedef struct{ //Structure pour les Pret
	int code;
	char nom[10];
}eleves;
void choix();
void choix()
{
	
Color(10,0);	
printf("\t\t\t\t\t\t  _____    _   _____    _      _   ______   _____  _    _   _____   ______   _    _   _____	\n");
printf("\t\t\t\t\t\t |  _  |  | | |  _  |  | |    | | |  __  | |_   _|| |  | | |  ___| |  __  | | |  | | |  ___|\n");
printf("\t\t\t\t\t\t | |_| |  | | | |_| |  | |    | | | |  | |   | |  | |__| | | |___  | |  | | | |  | | | |___ \n");
printf("\t\t\t\t\t\t |  __  | | | |  __ |  | |    | | | |  | |   | |  |  __  | |  ___| | |  | | | |  | | |  ___|\n");
printf("\t\t\t\t\t\t | |__| | | | | |__| | | |___ | | | |__| |   | |  | |  | | | |___  | |__| | | |__| | | |___ \n");
printf("\t\t\t\t\t\t |______| |_| |______| |_____||_| |______|   |_|  |_|  |_| |_____| |______| |______| |_____|\n\n\n\n");   	
	
	
	
	
	
Color(11,0);	
printf("\n\t\t\t\t\t\t\t\t------------------------bibliotheque------------------------\n");
Color(15,0);
printf("\t\t\t\t\t\t\t\t|     1 pour afficher tous les livres de la bibliotheque   |\n");
Color(11,0);
printf("\t\t\t\t\t\t\t\t************************************************************\n");
Color(15,0);	
printf("\t\t\t\t\t\t\t\t|            2 pour afficher les livres sortis             |\n");
Color(11,0);
printf("\t\t\t\t\t\t\t\t************************************************************\n");
Color(15,0);
printf("\t\t\t\t\t\t\t\t|3 pour afficher les livres sortis par un eleve particulier|\n");
Color(11,0);
printf("\t\t\t\t\t\t\t\t************************************************************\n");
Color(15,0);
printf("\t\t\t\t\t\t\t\t|\t\t 4 enregistrer un emprunt                  |\n");
Color(11,0);
printf("\t\t\t\t\t\t\t\t************************************************************\n");
Color(15,0);
printf("\t\t\t\t\t\t\t\t|\t\t  5 enregistrer un retour                  |\n");
Color(11,0);
printf("\t\t\t\t\t\t\t\t************************************************************\n");
Color(15,0);
printf("\t\t\t\t\t\t\t\t|\t \t 6 terminer et enregistrer                 |\n");	
Color(11,0);
printf("\t\t\t\t\t\t\t\t************************************************************\n");
Color(15,0);
printf("\t\t\t\t\t\t\t\t|\t        7 terminer sans enregistrer                |\n");
Color(11,0);
printf("\t\t\t\t\t\t\t\t************************************************************\n\n");
Color(10,0);
printf("\t\t\t\t\t\t\t\t      ****(Remarque : Pour efface Scren Tapy  0)****\n\n\n");

Color(15,0);
	printf("[+][+][+]Choisi Votre Choix : ");
	
		
}
/*f1(int t[],int t2[],char t3[]);
f1(int t[],int t2[],char t3[]){
	
	if(t == 0){
	printf("---------------------------------------------\n");
	printf("Reference est : %d | Titre : %s  | Sorti \n",t2,t3);
	printf("---------------------------------------------\n");
}
    else
	{
		printf("Reference est : %d | Titre : %s \n",t2,t3);
	}
	
}*/
main(int argc, char *argv[])
{

	int c=0; //Pour connu le nombre des livres
	int i,ch,j;
	int sr=0;//Pour connu le nombre des eleves
	int s=0;//Pour connu le nombre Sorti
	
	livres T_livre[10];   //Declaration d'un tableau par Structure de livre
	eleves T_eleves[10],ele;  //Declaration d'un tableau par structur d'eleve
	//**********chargement de fichier sur tableau*******
	FILE *pl=fopen("livres.txt","r");
	if(pl==NULL){
		printf("Error!!!!");
		return 0;
	}
	do{
		fscanf(pl,"%d\t%s\t%d\n",&T_livre[c].ref,&T_livre[c].titre,&T_livre[c].statu);
		c=c+1;
	}while(!feof(pl));
	
	fclose(pl);
	                  //*************//
	
	FILE *pe=fopen("eleves.txt","r");
	if(pe==NULL)
	{
		printf("Error!!!");
		return 0;
	}
	do{
		fscanf(pe,"%d\t%s\n",&T_eleves[sr].code,&T_eleves[sr].nom);
		sr+=1;
	}while(!feof(pl));
	//****************************
	do{
	ici:
    choix();  //Fonction pour les choix 
    scanf("%d",&ch);
    
	//******Fonction pour Laffichage des livres ***********
	switch(ch){
	case 0 : {
		system("CLS");
		goto ici;
		break;
	}
	case 1 : {
		    system("CLS");
		    for(i=0;i<c;i++)
			{
				//f1(T_livre[i].statu,T_livre[i].ref,T_livre[i].titre);
				if(T_livre[i].statu == 0)
			{
				Color(10,0);
				printf("---------------------------------------------\n");
				Color(14,0);
				printf("Reference est : %d | Titre : %s  | Sorti |\n",T_livre[i].ref,T_livre[i].titre);
				Color(10,0);
				printf("---------------------------------------------\n");
				s+=1;
			}
			else
			{
				Color(10,0);
				printf("---------------------------------------------\n");
				Color(10,0);
				printf("Reference est : %d | Titre : %s 	    |\n",T_livre[i].ref,T_livre[i].titre);
				Color(10,0);
				printf("---------------------------------------------\n");
			}	
			}
			Color(13,0);
			printf("\n\n\t\t\t ***************************\n");
			Color(10,0);
			printf("\t\t\t|  Le nombre Total est : %d  |\n",c);
			Color(13,0);
			printf("\t\t\t****************************\n");
			Color(9,0);
			printf("\t\t\t|  Le nombre Sorti est : %d  |\n",sr);
			Color(13,0);
			printf("\t\t\t ***************************\n\n\n\n");
				break;
	}
	//****************************
	case 2:{
		
		for(i=0;i<sr;i++)
		{
			for(j=0;j<c;j++)
			{
				if(T_eleves[i].code==T_livre[j].ref)
				{
					Color(14,0);
					printf("-------------------------------------------------------------------------\n");
					Color(14,0);
					printf("reference : %d  | le titre : %s | le nom de l'emprunteur : %s  |\n",T_livre[j].ref,T_livre[j].titre,T_eleves[i].nom);
					Color(14,0);
					printf("-------------------------------------------------------------------------\n");
				}
	    	}
		
		}
		Color(10,0);
		printf("\n\t\t***************************\n");
		Color(10,0);
		printf("\t\t| Le Nombre Sorti est : %d  |\n",sr);
		Color(10,0);
		printf("\t\t***************************\n");
		break;
	}
	//****************************
	case 3:{
		system("CLS");
		int fi=0;
		char n[20];
		printf("Donner le Nom de l'etudiant : ");
		scanf("%s",&n);
		
		/*if(strcmp(n, "abdo") == 0){
		
		   printf("Donne");}
		else{
			printf("dfsdfsdf");
		}*/
		
		for(i=0;i<sr;i++)
		{
			if(strcmp(T_eleves[i].nom,n) == 0)
			{
				for(j=0;j<c;j++)
				{
					if(T_eleves[i].code==T_livre[j].ref)
					{
						Color(10,0);
						printf("\n\t-------------------------------------------\n");
						Color(10,0);
						printf("\t|  Reference est : %d   |  Titre : %s |\n",T_livre[j].ref,T_livre[j].titre);
						Color(10,0);
						printf("\t-------------------------------------------\n");
						fi=1;
					}
				
				}
			}
		}
		if(fi==0)
		{
			Color(4,0);
			printf("\nL'eleve n'existe Pas !!!!!");
		}
		break;
	}
	case 4:{
		   system("CLS");
		   char title[10];
		   int oxl=0;
		   int xs=0;
		  
		   printf("Donner le titre de livre : ");
		   scanf("%s",&title);
		   for(i=0;i<c;i++)
		   {
		   	if((strcmp(T_livre[i].titre,title)==0) && (T_livre[i].statu==1))
			   {
			   	printf("%d\n",sr);
			   	//sr=sr+1;
			   	T_livre[i].statu=0;
			   	Color(10,0);
			   	printf("\nLe livre existe !!!!!!\n");
			   	Color(15,0);
			   	T_eleves[sr].code = T_livre[i].ref;
			    printf("\nDoner le Nom de emprunt : ");
			   	scanf("%s",&T_eleves[sr].nom);
			   	sr=sr+1;
			   	oxl=1;
			   	break;
			   }
		   }
		   if(oxl==0)
		   {
		   	
		   	for(i=0;i<c;i++)
			   {
			   	if((strcmp(T_livre[i].titre,title)==0) && (T_livre[i].statu==0))
				   {
				   	 Color(12,0);
				   	 printf("\nLe Livre est Deja Sorti !!!!!!");
				   	 xs=1;
				   	 break;
				   }
			   }
		   }
		   if( xs==0 && oxl==0)
		   {
		   	Color(12,0);
		   	printf("Le Titre N'existe Pas !!!!!!!!'");
		   }
		   /*	for(i=0;i<=sr-1;i++)
			   {
	           	printf("%d\t%s\n",T_eleves[i].code,T_eleves[i].nom);
	           }*/
		break;
	}
	case 5:{             // enregistrer un retour
		    system("CLS");
		    int numero;
		    int pr=0,pr2=0,amp,ii,jj;
		    int oxil;
		    
		    printf("Donner le Numero de Livre emprunte : ");
		    scanf("%d",&numero);
		    
		    for(i=0;i<c;i++)
			{
				if((T_livre[i].ref==numero )&& (T_livre[i].statu==0))
				{
					Color(10,0);
					printf("Le Livre est Deja emprunte !! \n");
					for(j=0;j<sr;j++)
					{
						if(T_livre[i].ref== T_eleves[j].code)
						{
							Color(14,0);
						   printf("\n\t--------------------------------------------------------------------\n");
						   printf("\t|le Titre : %s\tLe numero : %d\t | l'emprunteur : %s  |\n",T_livre[i].titre,T_livre[i].ref,T_eleves[j].nom);
						   printf("\t--------------------------------------------------------------------\n");
						   ii=i;
						   jj=j;
						   pr=1;
						   Color(10,0);
						   printf("\n\npour Confirmer cette retur Taper ----------- 1\t\nPour le Contraire Taper ---------0 : ");
			               scanf("%d",&amp);
						   break;	
						}
					}
				}		
			}
			if(pr==0)
			{
				for(i=0;i<c;i++)
				{
					if((T_livre[i].ref==numero) && (T_livre[i].statu==1))
					{
						Color(12,0);
						printf("\nle livre n'est pas emprunte !!!!");
						pr2=1;
						break;
					}
				}
				
			}
			if(pr2==0 && pr==0)
			{
				Color(12,0);
				printf("\nle numero du livre n'existe pas\n");
			}
			if(amp==1)
			{
				Color(13,0);
				printf("\nModification est bien effectuer !!");
				T_livre[ii].statu=1;
				for(j=jj;j<sr;j++)
				{
					T_eleves[j].code = 	T_eleves[j+1].code;
					for(i=0;i<10;i++)
					{
						T_eleves[j].nom[i] = T_eleves[j+1].nom[i];
					}
				}
				sr=sr-1;	
			}
		break;
	}
	case 6 :{
	
		FILE *pl=fopen("livres.txt","w");
	    if(pl==NULL)
		{
		printf("Error!!!!");
		return 0;
    	}
		FILE *pe=fopen("eleves.txt","w");
		if(pe==NULL)
		{
			printf("Error!!!");
			return 0;
		}
		    for(i=0;i<=sr-1;i++){
			fprintf(pe,"%d\t%s\n",T_eleves[i].code,T_eleves[i].nom);
		}
		for(i=0;i<c;i++)
		{
			fprintf(pl,"%d\t%s\t%d\n",T_livre[i].ref,T_livre[i].titre,T_livre[i].statu);
		}
		fclose(pl);
		fclose(pe);
			
				
			break;
		}
		case 7:{
			Color(9,0);
			printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t     *******............Goood Bye ............********\n\n\n\n\n\n\n\n\n\n");
			return 0;
			break;
		}
		default : {
			printf("votre choix est incorrect !!!\n");
			break;
		}
	
}
	
	
	
	
}while(ch!=6);
}




void Color(int couleurDuTexte,int couleurDeFond) // fonction d'affichage de couleurs
{
HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
} 
