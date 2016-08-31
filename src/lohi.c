
#include "LPS.h"

struct lohi lohi_create(int lo, int hi, struct lohi *tail) {
  struct lohi head;
  head.lo = lo;
  head.hi = hi;
  head.next = tail ? tail : NULL;
  return head;
}

void lohi_print(struct lohi *res, char buff[]) {

  int i;

  while (res != 0) {
    printf("lo: [%d] hi: [%d] pal: [", res->lo, res->hi);
    int i = res->lo - 1;
    while (++i <= res->hi)
      printf("%c", buff[i]);
    printf("]\n");
    res = res->next;
  }
}
