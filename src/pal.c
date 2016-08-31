
#include "LPS.h"

void chck_pal(int *lo, int *hi, char buff[], int len, struct lohi *head) {
  while (buff[*lo] == buff[*hi] && *lo > 0 && *hi < len) {
    (*lo)--;
    (*hi)++;
  }
  (*lo)++;
  (*hi)--;
  if (*hi - *lo > head->hi - head->lo) {
    head->lo = *lo;
    head->hi = *hi;
    lohi_print(head, buff);
  }
  return;
}

struct lohi find_pals(char buff[], int len) {

  struct lohi head = lohi_create(0, 1, NULL);
  int lo;
  int hi;
  int i = len;
  while (i-- > 1) {
    lo = i;
    hi = i;
    chck_pal(&lo, &hi, buff, len, &head);

    lo = i - 1;
    hi = i;
    if (buff[lo] == buff[hi])
      chck_pal(&lo, &hi, buff, len, &head);
  }
  return head;
}
