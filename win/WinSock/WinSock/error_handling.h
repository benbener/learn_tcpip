#ifndef _ERROR_HANDING_H__
#define _ERROR_HANDING_H__

#include <stdio.h>
#include <stdlib.h>

void ErrorHanding(char *message)
{
	fputs(message,stderr);
	fputc('\n',stderr);
	exit(1);
}

#endif
