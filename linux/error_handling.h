#ifndef _ERROR_HANDING_H__
#define _ERROR_HANDING_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void error_handing(char *message)
{
	fputs(message,stderr);
	fputc('\n',stderr);
	exit(1);
}

#endif
