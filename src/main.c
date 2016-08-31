
#include "LPS.h"

int main(int argc, char **argv) {

  char *arq = "sampleinput3.txt";

  if (argc == 2)
    arq = argv[1];

  FILE *f = fopen(arq, "r");

  char buff[3001];

  fread(buff, 3000, sizeof(char), f);
  buff[3000] = '\0';

  struct lohi r = find_pals(buff, 3000);
  struct lohi *res = &r;
  lohi_print(res, buff);

  return 0;
}
