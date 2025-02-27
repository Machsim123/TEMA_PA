#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define lungime_max 64

typedef struct Membri
{
    char *nume_membru, *prenume_membru;
    int scor_membru;
    struct Membri *next_membru;
}Membri;

typedef struct Echipa
{
    int nr_membri;
    char *nume_echipa;
    double scor_echipa;
    struct Membri *head_membri;
    struct Echipa *next_echipa;
}Echipa;

typedef struct Meci
{ 
    struct Echipa *Echipa_1;
    struct Echipa *Echipa_2;
    struct Meci *next_meci;
}Meci;

typedef struct Queue
{
    struct Meci *front, *rear;
}Queue;

typedef struct Stiva_invingatori
{
    Echipa *Invingator;
    struct Stiva_invingatori *next_invingator;
}Stiva_invingatori;

typedef struct Stiva_pierzatori
{
    Echipa *Pierzator;
    struct Stiva_pierzatori *next_pierzator;
}Stiva_pierzatori;

void verif_citire(FILE *);

void citire_echipa(Echipa **, FILE *);

void citire_membri(Membri **, FILE *, double *);

void addAtBeginning_Membri(Membri **, Membri *);

void addAtBeginning_Echipa(Echipa **, Echipa *);

void afisare_nume_echipe(Echipa **, FILE *);

int gasire_limita_echipe(int );

void scoatere_echipe(Echipa **, int );

void aflare_minim(Echipa *, double *);

void scoatere_echipa(Echipa **, double );

Queue* createQueue();

void enQueue(Queue *, Echipa *, Echipa *);

Meci *deQueue(Queue *);

int isEmpty_cozi(Queue *);

void push_invingatori(Stiva_invingatori **, Echipa *);

void push_pierzatori(Stiva_pierzatori **, Echipa *);

Echipa *pop_invingatori(Stiva_invingatori **);

Echipa *pop_pierzatori(Stiva_pierzatori **);

void Stergere_Stiva_pierzatori(Stiva_pierzatori **);

void marire_punctaj_echipa(Echipa **);

void marire_punctaj_membru(Membri **);
