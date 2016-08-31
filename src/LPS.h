/*
 * Public interface for LPS
 */
#include <stdio.h>

struct lohi {
  int lo;
  int hi;
  struct lohi *next;
};

struct lohi lohi_create(int, int, struct lohi *);
void lohi_print(struct lohi *, char[]);

void chck_pal(int *, int *, char[], int, struct lohi *);
struct lohi find_pals(char[], int);
