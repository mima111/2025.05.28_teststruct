#include <stdio.h>
#include "contact.h"

void testContact();

int main()
{
	testContact();

	return 0;
}

void testContact()
{
	Contact c1 = { "ȫ�浿","01027780298", MAN, 2025 };
	Contact c2 = { "ȫ�浿","01027780298", MAN, 2025 };
	Contact c3 = { "��浿","01027780298", MAN, 2025 };

	printContact(c1);
	printContactptr(&c2);

	int result1 = isEqualContact(c1, c2);
	int result2 = isEqualContactptr(&c2, &c3);

	printf("c1�� c2�� %s\n", result1 ? "�����ϴ�." : "�ٸ��ϴ�");
	printf("c2�� c3�� %s\n", result2 ? "�����ϴ�." : "�ٸ��ϴ�");
}