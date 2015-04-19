#include <time.h>
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h> 

typedef struct AppClock object;

struct AppClock {
	int m_duree;
	int m_seconde;
	int m_minute;
	int m_heure;
	int m_jour;
	int m_mois;
	int m_annee;    
}

int getDuree () {
	return m_duree;
}

int getSeconde () {
	return m_seconde;	
}

int getMinute () {
	return m_minute;
}

int getHeure () {
	return m_heure;
}

int getJour () {
	return m_jour;
}

int getMois () {
	return m_mois;
}

int getAnnee () {
	return m_annee;
}

void normalize () {
	m_secondes = m_duree % 60;		//nombre de secondes
	m_minutes  = m_duree / 60 % 60;		//nombre de minutes
        m_heures   = m_duree / 3600 % 24;	//nombre d'heures
        m_jours    = m_duree / 86400 % 30;	//nombre de jours
	m_mois     = m_duree / 2592000 % 12;	//nombre de mois
	m_annee    = m_duree / 31104000;	//nombre d'années
}

//renvoie le temps sous forme de
//tableau de caractères pour faciliter l'affichage
char*[] getTime () {                                    
	int annee[50];                  //creer un tableau d'int de taille 50               
	sprintf (annee, "%d", m_annee); //remplit le tableau d'int avec m_annee et 
                                        //le convertit en tableau de caractères
	int mois[50];
	sprintf (mois, "%d", m_mois);

	int jour[50];
	sprintf (jour, "%d", m_jour);
	
	int heure[50];
	sprintf (heure, "%d", m_heure);

	int minute[50];
	sprintf (minute, "%d", minute);

	int seconde[50];
	sprintf (seconde, "%d", seconde);	
	
	strcat (annee, " ");
	strcat (annee, mois);
	strcat (annee, " ");
	strcat (annee, jour);
	strcat (annee, " ");
	strcat (annee, heure);
	strcat (annee, " ");
	strcat (annee, minute);
	strcat (annee, " ");
	strcat (annee, seconde);

	return annee;
}

Object* newTime (int m_duree) {
        Object* time = malloc(sizeof(Object));
        time->m_duree = m_duree;
        return time
}

int main () {
        newTime(62208000);
        
        return 0;
}











