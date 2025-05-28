// #pragma once ½áµµ µÊ.
#ifndef _CONTACT_H_129847575
#define _CONTACT_H_129847575

enum gender { MAN, WOMAN };
typedef enum gender Egender;

struct contact {
	char name[24];
	char phone[24];
	Egender gender;
	int year;
};

typedef struct contact Contact;


int isEqualContact(Contact a, Contact b);
void printContact(Contact ct);

#endif //_CONTACT_H_129847575