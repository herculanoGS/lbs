#include <stdio.h>

struct lohi {
  int lo;
  int hi;
  struct lohi *next;
};

struct lohi lohi_create(int lo, int hi, struct lohi *tail) {
  struct lohi head;
  head.lo = lo;
  head.hi = hi;
  head.next = tail ? tail : NULL;
  return head;
}

void lohi_print(struct lohi *res, char buff[]) {

  while (res != 0) {
    printf("lo: [%d] hi: [%d] pal: [", res->lo, res->hi);
    int i = res->lo - 1;
    while (++i <= res->hi)
      printf("%c", buff[i]);
    printf("]\n");
    res = res->next;
  }
}

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

char buff[3001];

int main(int argc, char **argv) {

  // char *arq = "sampleinput3.txt";

  // if (argc == 2)
  //   arq = argv[1];

  // FILE *f = fopen(arq, "r");

  
  // fread(buff, 3000, sizeof(char), f);
  buff[3000] = '\0';

  struct lohi r = find_pals(buff, 3000);
  struct lohi *res = &r;
  lohi_print(res, buff);

  return 0;
}
