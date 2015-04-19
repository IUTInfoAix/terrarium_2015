#include <time.h>

/*
Programme de test des différentes fonctionnalités du module RTC de la carte SAM4S X-PLAINED de chez Atmel.
*/

TEST_GROUP (Clock)
{
	void setup() {
	}
	void teardown() {
	}
}

TESTgetAnnee (Clock, getAnnee) {
	ASSERT_EQUAL(, getAnnee());
}

TESTgetMois (Clock, getMois) {
	ASSERT_EQUAL(, getMois());
}

TESTgetSemaine (Clock, getSemaine) {
	ASSERT_EQUAL(, getSemaine());
}

TESTgetJour (Clock, getJour) {
	ASSERT_EQUAL(, getJour());
}

TESTgetHeure (Clock, getHeure) {
	ASSERT_EQUAL(, getHeure());
}

TESTgetMinute (Clock, getMinute) {
	ASSERT_EQUAL(, getMinute());
}

TESTgetSeconde (Clock, getSeconde) {
	ASSERT_EQUAL(, getSeconde());
}

TESTgetTime (Clock, getTime) {
	
	ASSERT_EQUAL(, getTime());
}

TESTsetTime (Clock, setTime) {
	setTime(0);
	ASSERT_EQUAL(0, getTime()); 
}

TESTsetAnnee (Clock, setAnnee) {
	setAnnee(5);
	ASSERT_EQUAL(5, getAnnee());
}

TESTsetMois (Clock, setMois) {
	setMois(5);
	ASSERT_EQUAL(5, getMois());
}

TESTsetSemaine (Clock, setSemaine) {
	setSemaine(5);
	ASSERT_EQUAL(5, getSemaine());
}

TESTsetJour (Clock, setJour) {
	setJour(5);
	ASSERT_EQUAL(5, getJour());
}

TESTsetHeure (Clock, setHeure) {
	setHeure(5);
	ASSERT_EQUAL(5, getHeure());
}

TESTsetMinute (Clock, setMinute) {
	setMinute(5);
	ASSERT_EQUAL(5, getMinute());
}

TESTsetSeconde (Clock, setSeconde) {
	setSeconde(5);
	ASSERT_EQUAL(5, getSeconde());
}
