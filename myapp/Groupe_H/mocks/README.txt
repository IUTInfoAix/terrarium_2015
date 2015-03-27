Il faudrait faire un mock pour simuler l'esp8266

Même pas besoin de faire de classe en fait, il faut faire une fonction qui prend
en paramètre (unsigned long int* argc[]) 
argc[] sera par exemple de la forme {01000001, 01000001, ... }

Chaque chaine binaire etant une lettre il faut convertir chaque chaine en une lettre pour faire une chaine de lettre

Puis faire des conditions if(MaNouvelleChaine == "AT+RST") mock.actualCall("restart module);

AT+RST est tiré de https://nurdspace.nl/ESP8266#Commands

