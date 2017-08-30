#ifndef _CPK_UNCOMPRESS_H_INCLUDED
#define _CPK_UNCOMPRESS_H_INCLUDED

#include <stdio.h>

long long uncompress(FILE *infile, long long offset, long long size, FILE *outfile);

#endif
