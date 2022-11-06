#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED
#include <stdio.h>
typedef struct
{
int jour;
int mois;
int annee;
}datenais;
typedef struct
{
    char nom[50];
    char prenom[50];
    int id;
    char mot_de_passe[50];
    char role[50];
    bool sex;
    datenais date;
    char municipalite[50];
    int numero;
} form;

int ajouter();


#endif // POINT_H_INCLUDED
