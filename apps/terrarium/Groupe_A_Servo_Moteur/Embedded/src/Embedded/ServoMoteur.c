/*
*
*		Fichier : ServoMoteur.c
*
*		Contient le comportement simulé du servomoteur
*
*		Dernière modification : mardi 7 avril 2015
*
*	==============================================================
*
*	-----------------------FONCTIONS A UTILISER-------------------


static int     pwm_open(FAR struct file *filep);

static ssize_t pwm_write(FAR struct file *filep, FAR const char *buffer, size_t buflen);

static int     pwm_start(FAR struct pwm_upperhalf_s *upper, unsigned int oflags);

static int     pwm_ioctl(FAR struct file *filep, int cmd, unsigned long arg);

NB: Voir pwm.c dans le même dossier

*/

#include "ServoMoteur.h"

void initializeServomoteur()