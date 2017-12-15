#include "types.h"

const char * getRgmDir();

void clearscreen();

int willrust(int);

int armorclass(int);
int weaponclass(int);

int stlmatch(char *, char *);

int havenamed(stuff, char *name);

int havering(int, int);
int ringclass(int);

int havearmor (int, int, int);

int havefood(int);

int worth(int);

const char * getLockFile ();

char *getname ();

int dwait(int, char *);

void command (int , char *);

void toggleecho();
void getrogue (char *, int);
void evalknobs (int , int , int);
void saveltm (int);
void positionreplay ();

void inferhall (register int, register int);
void updateat();
void nametrap (int, int);

void add_score (char *, char *, int);

void say(char *);
void saynow(char *);
void sendnow(char *);
void rogo_send(char *);
