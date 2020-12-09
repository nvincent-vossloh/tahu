/*
 * Copyright (C) 1996-2020 Free Software Foundation, Inc.
 *
 * SPDX-License-Identifier: EPL-2.0
 */
#include "pb_zephyr.h"
#include <string.h>
#include <stdlib.h>

/* Duplicate S, returning an identical malloc'd string.  */
char * strdup (const char *s)
{
	size_t len = strlen (s) + 1;
	void *new = malloc (len);
	if (new == NULL)
		return NULL;
	return (char *) memcpy (new, s, len);
}

char * strndup (const char *s, size_t n)
{
	size_t len = strnlen (s, n);
	char *new = (char *) malloc (len + 1);
	if (new == NULL)
		return NULL;
	new[len] = '\0';
	return (char *) memcpy (new, s, len);
}
