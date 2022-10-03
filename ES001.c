//csv comma separeted values
//ESERCIZIO UNO 13/09/2022
//AUTHOR:GALLO ALESSANDRO
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#define LUNGS 1024
#define LUNG 16570

typedef struct leggifile {
    int rank;
    int anno;
    char* nomeg;
    char* nomep;
    char* nomege;
    char* nomepu;
    float  nasales;
    float  eusales;
    float jpsales;
    float otsales;
    float gbsales;
}Copia;
int main() {
    FILE *file;
    Copia dati[LUNG];
    char strApp[LUNG];
    int n=0;
    Copia *data=dati;
    char c[LUNGS];
    file=fopen("vgsales.csv","r");
    if(file==NULL){
        printf("errore nell'apertura del file");
    }
     printf("apertura del file riuscita\n");
     fgets(strApp,LUNGS,file);
     while(fgets(strApp,LUNG,file)!=EOF){
        data->rank=atoi(strtok(strApp,","));
        data->nomeg=strtok(NULL,",");
        data->nomep=strtok(NULL,",");
        data->anno=atoi(strtok(NULL,","));
        data->nomege=strtok(NULL,",");
        data->nomepu=strtok(NULL,",");
        data->nasales=atof(strtok(NULL,","));
        data->eusales=atof(strtok(NULL,","));
        data->jpsales=atof(strtok(NULL,","));
        data->otsales=atof(strtok(NULL,","));
        data->gbsales=atof(strtok(NULL,","));
        printf("%d ",data->rank);
        printf("%s ",data->nomeg);
        printf("%s ",data->nomep);
        printf("%d ",data->anno);
        printf("%s ",data->nomege);
        printf("%s ",data->nomepu);
        printf("%f ",data->nasales);
        printf("%f ",data->eusales);
        printf("%f ",data->jpsales);
        printf("%f ",data->otsales);
        printf("%f\n ",data->gbsales);
        data++;
     }
     fclose(file);
}

