#ifndef _CUDDWRAP_H
#define _CUDDWRAP_H

#include "util.h"
#include "cudd.h"

void wrappedCuddRef(DdNode *f);
void wrappedCuddDumpDot(DdManager *m, DdNode *f, char *filename);
void deref(DdManager *m, DdNode *d);
DdNode *wrappedCuddNot(DdNode *f);
int wrappedCuddIsComplement(DdNode *f);
int **allSat(DdManager *m, DdNode *n, int *nterms, int *nvars);
int *oneSat(DdManager *m, DdNode *n, int *nvars);
int *testnew();
int testnext(int *i);

#endif